/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)beginRequestingBacklightRamping:(id)arg1 ;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg1 period:(double)arg2 disableWhitePointShift:(BOOL)arg3 ;
-(void)endRequestingBacklightRamping:(id)arg1 ;
-(void)beginAllowingBacklightRamping:(id)arg1 ;
-(void)endAllowingBacklightRamping:(id)arg1 ;
@end

