/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITextPasteCoordinatorDelegate.h>

@protocol UITextPasteConfigurationSupporting_Internal;
@class NSMapTable, NSString;

@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate> {

	NSMapTable* _sessions;
	id<UITextPasteConfigurationSupporting_Internal> _supportingView;

}

@property (assign,nonatomic,__weak) id<UITextPasteConfigurationSupporting_Internal> supportingView;              //@synthesize supportingView=_supportingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)combineAttributedStrings:(id)arg1 addingSeparation:(BOOL)arg2 ;
-(id)initWithSupportingView:(id)arg1 ;
-(id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(BOOL)arg4 delegate:(id)arg5 ;
-(void)_transformTextPasteItem:(id)arg1 ;
-(id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(BOOL)arg4 ;
-(id)_clampRange:(id)arg1 ;
-(id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2 ;
-(void)_executePasteForSession:(id)arg1 ;
-(void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_pasteDelegateHandlesPasting;
-(void)coordinator:(id)arg1 endPastingItems:(id)arg2 ;
-(id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(BOOL)arg4 ;
-(id)beginPastingItems:(id)arg1 toRange:(id)arg2 ;
-(void)_restorePasteResultForSession:(id)arg1 ;
-(id<UITextPasteConfigurationSupporting_Internal>)supportingView;
-(void)setSupportingView:(id<UITextPasteConfigurationSupporting_Internal>)arg1 ;
@end

