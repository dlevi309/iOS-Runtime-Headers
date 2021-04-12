/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SFLinkPreviewHeaderContentViewDelegate>)delegate;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setPreviewEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<SFLinkPreviewHeaderContentViewDelegate>)arg1 ;
-(void)updateConstraints;
-(void)_togglePreviewButtonPressed;
-(BOOL)isPreviewEnabled;
-(void)_updateDomainWithHidePreviewActionConstraints;
-(void)_updateSafariIconWithShowPreviewActionConstraints;
@end

