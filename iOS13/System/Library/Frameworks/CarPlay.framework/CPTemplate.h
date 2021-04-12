/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPBarButtonDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>
#import <libobjc.A.dylib/CPControlDelegate.h>
#import <libobjc.A.dylib/CPTemplateDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPBaseTemplateProviding, CPTemplateDelegate;
@class CPBarButton, NAFuture, NSUUID, NSArray, NSString;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding> {

	CPBarButton* _backButton;
	id _userInfo;
	id<CPBaseTemplateProviding> _templateProvider;
	NAFuture* _templateProviderFuture;
	NSUUID* _identifier;
	id<CPTemplateDelegate> _templateDelegate;
	NSArray* _internalLeadingBarButtons;
	NSArray* _internalTrailingBarButtons;

}

@property (nonatomic,retain) id<CPBaseTemplateProviding> templateProvider;                //@synthesize templateProvider=_templateProvider - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture;                           //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,retain) NSArray * internalLeadingBarButtons;                         //@synthesize internalLeadingBarButtons=_internalLeadingBarButtons - In the implementation block
@property (nonatomic,retain) NSArray * internalTrailingBarButtons;                        //@synthesize internalTrailingBarButtons=_internalTrailingBarButtons - In the implementation block
@property (nonatomic,retain) id userInfo;                                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton;                                    //@synthesize backButton=_backButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setUserInfo:(id)arg1 ;
-(CPBarButton *)backButton;
-(void)setBackButton:(CPBarButton *)arg1 ;
-(BOOL)control:(id)arg1 setEnabled:(BOOL)arg2 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(NSArray *)arg1 ;
-(NSArray *)trailingNavigationBarButtons;
-(void)setTrailingNavigationBarButtons:(NSArray *)arg1 ;
-(id<CPBaseTemplateProviding>)templateProvider;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)connectTemplateProvider:(id)arg1 ;
-(void)setTemplateProvider:(id<CPBaseTemplateProviding>)arg1 ;
-(void)invalidateTemplateProvider;
-(BOOL)barButton:(id)arg1 setImage:(id)arg2 ;
-(BOOL)barButton:(id)arg1 setTitle:(id)arg2 ;
-(NAFuture *)templateProviderFuture;
-(NSArray *)internalLeadingBarButtons;
-(NSArray *)internalTrailingBarButtons;
-(void)setTemplateProviderFuture:(NAFuture *)arg1 ;
-(void)setInternalLeadingBarButtons:(NSArray *)arg1 ;
-(void)setInternalTrailingBarButtons:(NSArray *)arg1 ;
@end

