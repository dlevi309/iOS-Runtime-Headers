/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <ShareSheet/UIActivity.h>

@class UIColor, UIMenu;

@interface ICRDActivity : UIActivity {

	BOOL _isDisabled;
	BOOL _performActivityShouldDismissViewController;
	UIColor* _activityTintColor;
	UIMenu* _menu;
	long long _contextPathEnum;
	/*^block*/id _performActivityBlock;

}

@property (nonatomic,copy) id performActivityBlock;                                        //@synthesize performActivityBlock=_performActivityBlock - In the implementation block
@property (nonatomic,copy) UIColor * activityTintColor;                                    //@synthesize activityTintColor=_activityTintColor - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                              //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic) BOOL performActivityShouldDismissViewController;              //@synthesize performActivityShouldDismissViewController=_performActivityShouldDismissViewController - In the implementation block
@property (nonatomic,readonly) UIMenu * menu;                                              //@synthesize menu=_menu - In the implementation block
@property (assign,nonatomic) long long contextPathEnum;                                    //@synthesize contextPathEnum=_contextPathEnum - In the implementation block
+(id)defaultTintColor;
-(UIMenu *)menu;
-(id)init;
-(void)performActivity;
-(BOOL)isDisabled;
-(void)commonInit;
-(void)setIsDisabled:(BOOL)arg1 ;
-(void)performActivityWithCompletion:(/*^block*/id)arg1 ;
-(id)performActivityBlock;
-(id)initWithPerformActivity:(/*^block*/id)arg1 ;
-(UIColor *)activityTintColor;
-(void)setActivityTintColor:(UIColor *)arg1 ;
-(BOOL)performActivityShouldDismissViewController;
-(void)setPerformActivityShouldDismissViewController:(BOOL)arg1 ;
-(long long)contextPathEnum;
-(void)setContextPathEnum:(long long)arg1 ;
-(void)setPerformActivityBlock:(id)arg1 ;
@end

