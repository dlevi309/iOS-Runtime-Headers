/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerRateCommand.h>

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand> {

	float _minimumValue;
	float _maximumValue;

}

@property (assign,nonatomic) float minimumValue;                    //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) float maximumValue;                    //@synthesize maximumValue=_maximumValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)maximumValue;
-(void)setMinimumValue:(float)arg1 ;
-(float)minimumValue;
-(void)setMaximumValue:(float)arg1 ;
-(id)changeValue:(float)arg1 ;
@end

