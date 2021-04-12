/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol SFLinkPreviewHeaderContentViewDelegate;
@class UILabel, UIButton, UIImageView, NSArray, NSString;

@interface SFLinkPreviewHeaderContentView : UIButton {

	UILabel* _domainLabel;
	UIButton* _togglePreviewButton;
	UIImageView* _safariIcon;
	NSArray* _domainWithHidePreviewActionConstraints;
	NSArray* _safariIconWithShowPreviewActionConstraints;
	BOOL _previewEnabled;
	id<SFLinkPreviewHeaderContentViewDelegate> _delegate;
	NSString* _domain;

}

@property (assign,nonatomic,__weak) id<SFLinkPreviewHeaderContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * domain;                                                         //@synthesize domain=_domain - In the implementation block
@property (assign,getter=isPreviewEnabled,nonatomic) BOOL previewEnabled;                             //@synthesize previewEnabled=_previewEnabled - In the implementation block
-(NSString *)domain;
-(id<SFLinkPreviewHeaderContentViewDelegate>)delegate;
-(void)setDelegate:(id<SFLinkPreviewHeaderContentViewDelegate>)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(void)_togglePreviewButtonPressed;
-(BOOL)isPreviewEnabled;
-(void)_updateDomainWithHidePreviewActionConstraints;
-(void)_updateSafariIconWithShowPreviewActionConstraints;
@end

