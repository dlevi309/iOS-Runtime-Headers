/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXVolumeProviding.h>
#import <libobjc.A.dylib/SXVolumeReporting.h>

@class NSHashTable, NSString;

@interface SXVolumeProvider : NSObject <SXVolumeProviding, SXVolumeReporting> {

	BOOL _muted;
	float _volume;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolume:(float)arg1 ;
-(NSHashTable *)observers;
-(void)setMuted:(BOOL)arg1 ;
-(float)volume;
-(BOOL)muted;
-(id)initWithMuteState:(BOOL)arg1 volume:(float)arg2 ;
-(void)addVolumeObserver:(id)arg1 ;
-(void)removeVolumeObserver:(id)arg1 ;
@end

