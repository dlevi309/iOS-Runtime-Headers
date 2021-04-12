/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(NSArray *)supportedPlaybackRates;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(float)preferredPlaybackRate;
@end

