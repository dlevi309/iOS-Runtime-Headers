/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
*/


@interface HAButtonHapticsLoader : NSObject

@property (nonatomic,readonly) long long maxNumberOfSlots; 
@property (nonatomic,readonly) BOOL serviceAvailable; 
+(id)sharedInstance;
-(long long)maxNumberOfSlots;
-(BOOL)loadButtonHapticOfType:(long long)arg1 withParameters:(id)arg2 atSlot:(long long)arg3 error:(id*)arg4 ;
-(float)hapticGainForType:(long long)arg1 ;
-(float)defaultUpGainForType:(long long)arg1 ;
-(BOOL)loadButtonHapticOfType:(long long)arg1 atSlot:(long long)arg2 error:(id*)arg3 ;
-(BOOL)serviceAvailable;
-(float)audioGainForType:(long long)arg1 ;
-(void)dealloc;
-(float)defaultDownGainForType:(long long)arg1 ;
-(BOOL)hapticAssetType:(long long)arg1 hasAudio:(BOOL*)arg2 hasHaptic:(BOOL*)arg3 error:(id*)arg4 ;
@end

