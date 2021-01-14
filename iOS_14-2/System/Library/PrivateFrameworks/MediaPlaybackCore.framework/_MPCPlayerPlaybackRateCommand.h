/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerPlaybackRateCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand> {

	float _preferredPlaybackRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
@property (assign,nonatomic) float preferredPlaybackRate;                 //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)setPlaybackRate:(float)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(float)preferredPlaybackRate;
@end

