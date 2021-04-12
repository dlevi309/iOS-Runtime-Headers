/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVolumeProviding.h>
#import <libobjc.A.dylib/SVVolumeReporting.h>

@class NSHashTable, NSString;

@interface SVVolumeProvider : NSObject <SVVolumeProviding, SVVolumeReporting> {

	BOOL _muted;
	float _volume;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
-(NSHashTable *)observers;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithMuteState:(BOOL)arg1 volume:(float)arg2 ;
-(void)addVolumeObserver:(id)arg1 ;
-(void)removeVolumeObserver:(id)arg1 ;
@end

