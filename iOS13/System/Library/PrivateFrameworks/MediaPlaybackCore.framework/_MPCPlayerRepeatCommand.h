/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerRepeatCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerRepeatCommand : _MPCPlayerCommand <MPCPlayerRepeatCommand> {

	BOOL _supportsChangeRepeat;
	BOOL _supportsAdvanceRepeat;
	long long _currentRepeatType;
	NSArray* _supportedRepeatTypes;

}

@property (assign,nonatomic) long long currentRepeatType;                 //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
@property (nonatomic,retain) NSArray * supportedRepeatTypes;              //@synthesize supportedRepeatTypes=_supportedRepeatTypes - In the implementation block
@property (assign,nonatomic) BOOL supportsChangeRepeat;                   //@synthesize supportsChangeRepeat=_supportsChangeRepeat - In the implementation block
@property (assign,nonatomic) BOOL supportsAdvanceRepeat;                  //@synthesize supportsAdvanceRepeat=_supportsAdvanceRepeat - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)advance;
-(id)setRepeatType:(long long)arg1 ;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(void)setSupportedRepeatTypes:(NSArray *)arg1 ;
-(long long)currentRepeatType;
-(void)setSupportsChangeRepeat:(BOOL)arg1 ;
-(void)setSupportsAdvanceRepeat:(BOOL)arg1 ;
-(BOOL)supportsChangeRepeat;
-(BOOL)supportsAdvanceRepeat;
-(NSArray *)supportedRepeatTypes;
@end

