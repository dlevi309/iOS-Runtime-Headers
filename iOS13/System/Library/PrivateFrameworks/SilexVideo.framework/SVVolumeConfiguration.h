/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVolumeConfiguration.h>

@protocol SVVolumeConfiguration <NSObject>
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) double volume; 
@required
-(double)volume;
-(BOOL)muted;

@end


@class NSString;

@interface SVVolumeConfiguration : NSObject <SVVolumeConfiguration> {

	BOOL _muted;
	double _volume;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL muted;                          //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) double volume;                       //@synthesize volume=_volume - In the implementation block
-(double)volume;
-(BOOL)muted;
-(id)initWithVolume:(double)arg1 muted:(BOOL)arg2 ;
@end

