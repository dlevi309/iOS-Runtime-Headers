/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerShuffleCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerShuffleCommand : _MPCPlayerCommand <MPCPlayerShuffleCommand> {

	BOOL _supportsChangeShuffle;
	BOOL _supportsAdvanceShuffle;
	long long _currentShuffleType;
	NSArray* _supportedShuffleTypes;

}

@property (assign,nonatomic) long long currentShuffleType;                 //@synthesize currentShuffleType=_currentShuffleType - In the implementation block
@property (nonatomic,retain) NSArray * supportedShuffleTypes;              //@synthesize supportedShuffleTypes=_supportedShuffleTypes - In the implementation block
@property (assign,nonatomic) BOOL supportsChangeShuffle;                   //@synthesize supportsChangeShuffle=_supportsChangeShuffle - In the implementation block
@property (assign,nonatomic) BOOL supportsAdvanceShuffle;                  //@synthesize supportsAdvanceShuffle=_supportsAdvanceShuffle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)advance;
-(long long)currentShuffleType;
-(void)setCurrentShuffleType:(long long)arg1 ;
-(id)setShuffleType:(long long)arg1 ;
-(void)setSupportedShuffleTypes:(NSArray *)arg1 ;
-(void)setSupportsChangeShuffle:(BOOL)arg1 ;
-(void)setSupportsAdvanceShuffle:(BOOL)arg1 ;
-(BOOL)supportsChangeShuffle;
-(BOOL)supportsAdvanceShuffle;
-(NSArray *)supportedShuffleTypes;
@end

