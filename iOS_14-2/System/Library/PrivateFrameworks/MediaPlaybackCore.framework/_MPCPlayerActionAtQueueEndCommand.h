/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)actionAtQueueEnd;
-(id)setQueueEndAction:(long long)arg1 ;
-(void)setSupportedActions:(NSArray *)arg1 ;
-(void)setActionAtQueueEnd:(long long)arg1 ;
-(NSArray *)supportedActions;
@end

