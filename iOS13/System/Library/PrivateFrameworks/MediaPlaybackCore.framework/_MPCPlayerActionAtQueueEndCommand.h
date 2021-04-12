/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerActionAtQueueEndCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerActionAtQueueEndCommand : _MPCPlayerCommand <MPCPlayerActionAtQueueEndCommand> {

	long long _actionAtQueueEnd;
	NSArray* _supportedActions;

}

@property (assign,nonatomic) long long actionAtQueueEnd;              //@synthesize actionAtQueueEnd=_actionAtQueueEnd - In the implementation block
@property (nonatomic,retain) NSArray * supportedActions;              //@synthesize supportedActions=_supportedActions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)supportedActions;
-(void)setSupportedActions:(NSArray *)arg1 ;
-(long long)actionAtQueueEnd;
-(void)setActionAtQueueEnd:(long long)arg1 ;
-(id)setQueueEndAction:(long long)arg1 ;
@end

