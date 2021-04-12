/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class BrightnessSystemClient, NSHashTable;

@interface PKBacklightController : NSObject {

	BrightnessSystemClient* _brightnessClient;
	BOOL _foregroundActive;
	NSHashTable* _requesters;
	NSHashTable* _allowers;
	BOOL _isBacklightRamped;

}
+(id)sharedInstance;
-(id)init;
-(void)beginAllowingBacklightRamping:(id)arg1 ;
-(void)endAllowingBacklightRamping:(id)arg1 ;
-(void)endRequestingBacklightRamping:(id)arg1 ;
-(void)beginRequestingBacklightRamping:(id)arg1 ;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg1 period:(double)arg2 ;
@end

