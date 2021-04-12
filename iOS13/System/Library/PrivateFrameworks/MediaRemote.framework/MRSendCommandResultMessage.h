/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRSendCommandResultMessage : MRProtocolMessage {

	NSArray* _results;

}

@property (nonatomic,readonly) unsigned sendError; 
@property (nonatomic,readonly) NSArray * results; 
-(unsigned long long)type;
-(NSArray *)results;
-(unsigned)sendError;
-(id)initWithCommandID:(id)arg1 sendError:(unsigned)arg2 results:(id)arg3 ;
@end

