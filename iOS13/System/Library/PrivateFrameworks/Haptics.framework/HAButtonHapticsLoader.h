/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
*/


@interface HAButtonHapticsLoader : NSObject

@property (nonatomic,readonly) long long maxNumberOfSlots; 
@property (nonatomic,readonly) BOOL serviceAvailable; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)hapticAssetType:(long long)arg1 hasAudio:(BOOL*)arg2 hasHaptic:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id*)arg4 ;
-(BOOL)serviceAvailable;
-(long long)maxNumberOfSlots;
-(BOOL)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id*)arg3 ;
-(float)defaultDownGainForType:(long long)arg1 ;
-(float)defaultUpGainForType:(long long)arg1 ;
-(float)hapticGainForType:(long long)arg1 ;
-(float)audioGainForType:(long long)arg1 ;
@end

