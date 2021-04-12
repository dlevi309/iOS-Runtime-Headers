/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRSendCommandResultMessage : MRProtocolMessage {

	NSArray* _results;

}

@property (nonatomic,readonly) unsigned sendError; 
@property (nonatomic,readonly) NSArray * results; 
-(NSArray *)results;
-(id)initWithCommandID:(id)arg1 sendError:(unsigned)arg2 results:(id)arg3 ;
-(unsigned long long)type;
-(unsigned)sendError;
@end

