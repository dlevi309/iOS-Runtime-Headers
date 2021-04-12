/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICRDActivity.h>

@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : ICRDActivity {

	ICNote* _note;
	/*^block*/id _completionHandler;
	/*^block*/id _willPerformActivityBlock;
	UIWindow* _displayWindow;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id willPerformActivityBlock;                    //@synthesize willPerformActivityBlock=_willPerformActivityBlock - In the implementation block
@property (nonatomic,retain) ICNote * note;                                //@synthesize note=_note - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * displayWindow;              //@synthesize displayWindow=_displayWindow - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(void)setCompletionHandler:(id)arg1 ;
-(void)performActivity;
-(void)setNote:(ICNote *)arg1 ;
-(id)completionHandler;
-(ICNote *)note;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)willPerformActivityBlock;
-(UIWindow *)displayWindow;
-(void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2 ;
-(id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setWillPerformActivityBlock:(id)arg1 ;
-(void)setDisplayWindow:(UIWindow *)arg1 ;
@end

