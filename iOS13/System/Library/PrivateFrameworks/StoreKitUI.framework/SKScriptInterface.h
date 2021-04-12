/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface {

	SKProductPageViewController* _parentProductPageViewController;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * parentProductPageViewController;              //@synthesize parentProductPageViewController=_parentProductPageViewController - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)setParentProductPageViewController:(SKProductPageViewController *)arg1 ;
-(id)makeStoreSheetRequest;
-(void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(SKProductPageViewController *)parentProductPageViewController;
@end

