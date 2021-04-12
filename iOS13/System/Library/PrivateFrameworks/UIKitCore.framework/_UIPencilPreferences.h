/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIPencilPreferences : NSObject {

	long long _cachedPreferredTapAction;

}
+(id)sharedPreferences;
+(long long)preferredTapAction;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)_preferredTapAction;
-(void)_preferredTapActionDidChange;
@end

