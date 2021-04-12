/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIPencilPreferences : NSObject {

	long long _cachedPreferredTapAction;
	BOOL _cachedPrefersPencilOnlyDrawing;
	BOOL _cachedHasSeenPencilPairingUI;

}
+(long long)preferredTapAction;
+(BOOL)prefersPencilOnlyDrawing;
+(void)setPrefersPencilOnlyDrawing:(BOOL)arg1 ;
+(BOOL)hasSeenPencilPairingUI;
+(id)sharedPreferences;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(long long)_preferredTapAction;
-(void)_setPrefersPencilOnlyDrawing:(BOOL)arg1 ;
-(BOOL)_hasSeenPencilPairingUI;
-(BOOL)_prefersPencilOnlyDrawing;
-(void)_prefersPencilOnlyDrawingDidChange;
-(void)_preferredTapActionDidChange;
-(void)_hasSeenPencilPairingUIDidChange;
-(void)dealloc;
@end

