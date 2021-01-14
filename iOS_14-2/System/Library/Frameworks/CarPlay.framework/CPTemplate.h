/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPBarButtonDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>
#import <libobjc.A.dylib/CPControlDelegate.h>
#import <libobjc.A.dylib/CPTemplateDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPBaseTemplateProviding, CPTemplateDelegate;
@class CPBarButton, NSString, UIImage, NAFuture, NSUUID, NSArray;

@interface CPTemplate : NSObject <CPBarButtonDelegate, CPBarButtonProviding, CPControlDelegate, CPTemplateDelegate, NSSecureCoding> {

	BOOL _showsTabBadge;
	BOOL _needsUpdate;
	CPBarButton* _backButton;
	id _userInfo;
	NSString* _tabTitle;
	UIImage* _tabImage;
	long long _tabSystemItem;
	id<CPBaseTemplateProviding> _templateProvider;
	NAFuture* _templateProviderFuture;
	NSUUID* _identifier;
	id<CPTemplateDelegate> _templateDelegate;
	NSArray* _internalLeadingBarButtons;
	NSArray* _internalTrailingBarButtons;

}

@property (nonatomic,retain) id<CPBaseTemplateProviding> templateProvider;                //@synthesize templateProvider=_templateProvider - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                            //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture;                           //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<CPTemplateDelegate> templateDelegate;              //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (nonatomic,retain) NSArray * internalLeadingBarButtons;                         //@synthesize internalLeadingBarButtons=_internalLeadingBarButtons - In the implementation block
@property (nonatomic,retain) NSArray * internalTrailingBarButtons;                        //@synthesize internalTrailingBarButtons=_internalTrailingBarButtons - In the implementation block
@property (nonatomic,retain) id userInfo;                                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * tabTitle;                                           //@synthesize tabTitle=_tabTitle - In the implementation block
@property (nonatomic,retain) UIImage * tabImage;                                          //@synthesize tabImage=_tabImage - In the implementation block
@property (assign,nonatomic) long long tabSystemItem;                                     //@synthesize tabSystemItem=_tabSystemItem - In the implementation block
@property (assign,nonatomic) BOOL showsTabBadge;                                          //@synthesize showsTabBadge=_showsTabBadge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton;                                    //@synthesize backButton=_backButton - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(id)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(void)setBackButton:(CPBarButton *)arg1 ;
-(id)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performUpdate;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setTrailingNavigationBarButtons:(NSArray *)arg1 ;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(CPBarButton *)backButton;
-(NSUUID *)identifier;
-(UIImage *)tabImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTabImage:(UIImage *)arg1 ;
-(BOOL)control:(id)arg1 setEnabled:(BOOL)arg2 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(NSArray *)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(NSArray *)arg1 ;
-(NSArray *)trailingNavigationBarButtons;
-(id<CPBaseTemplateProviding>)templateProvider;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)invalidateTemplateProvider;
-(void)connectTemplateProvider:(id)arg1 ;
-(void)setTemplateProvider:(id<CPBaseTemplateProviding>)arg1 ;
-(BOOL)barButton:(id)arg1 setImage:(id)arg2 ;
-(BOOL)barButton:(id)arg1 setTitle:(id)arg2 ;
-(NAFuture *)templateProviderFuture;
-(BOOL)control:(id)arg1 setSelected:(BOOL)arg2 ;
-(NSArray *)internalLeadingBarButtons;
-(NSArray *)internalTrailingBarButtons;
-(NSString *)tabTitle;
-(long long)tabSystemItem;
-(BOOL)showsTabBadge;
-(void)setTemplateProviderFuture:(NAFuture *)arg1 ;
-(void)setInternalLeadingBarButtons:(NSArray *)arg1 ;
-(void)setInternalTrailingBarButtons:(NSArray *)arg1 ;
-(void)setTabTitle:(NSString *)arg1 ;
-(void)setTabSystemItem:(long long)arg1 ;
-(void)setShowsTabBadge:(BOOL)arg1 ;
@end

