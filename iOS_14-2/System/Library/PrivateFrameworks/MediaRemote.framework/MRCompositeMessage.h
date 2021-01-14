/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSMutableArray, NSArray;

@interface MRCompositeMessage : MRProtocolMessage {

	NSMutableArray* _messages;

}

@property (nonatomic,readonly) NSArray * messages; 
-(id)init;
-(NSArray *)messages;
-(void)addMessage:(id)arg1 ;
@end

