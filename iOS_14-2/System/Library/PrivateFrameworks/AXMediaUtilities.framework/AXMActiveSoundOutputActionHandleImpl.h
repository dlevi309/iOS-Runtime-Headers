/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMActiveSoundOutputActionHandleProvider.h>

@class AXMActiveSound, AXMSoundComponent, NSString;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider> {

	float _rate;
	float _pitch;
	AXMActiveSound* _activeSound;
	AXMSoundComponent* _soundComponent;

}

@property (assign,nonatomic,__weak) AXMActiveSound * activeSound;                    //@synthesize activeSound=_activeSound - In the implementation block
@property (assign,nonatomic,__weak) AXMSoundComponent * soundComponent;              //@synthesize soundComponent=_soundComponent - In the implementation block
@property (assign,nonatomic) float rate;                                             //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float pitch;                                            //@synthesize pitch=_pitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)pitch;
-(id)init;
-(void)setRate:(float)arg1 ;
-(void)stop;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1 ;
-(void)setActiveSound:(AXMActiveSound *)arg1 ;
-(void)setSoundComponent:(AXMSoundComponent *)arg1 ;
-(AXMActiveSound *)activeSound;
-(AXMSoundComponent *)soundComponent;
-(void)setPitch:(float)arg1 ;
@end

