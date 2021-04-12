/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPSenderStrategy.h>

@protocol MSPSenderMessageStrategyDelegate;
@class NSMutableSet;

@interface MSPSenderMessageStrategy : MSPSenderStrategy {

	id<MSPSenderMessageStrategyDelegate> _delegate;
	NSMutableSet* _messagesParticipants;

}

@property (nonatomic,retain) NSMutableSet * messagesParticipants;                               //@synthesize messagesParticipants=_messagesParticipants - In the implementation block
@property (assign,nonatomic,__weak) id<MSPSenderMessageStrategyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MSPSenderMessageStrategyDelegate>)delegate;
-(void)addParticipants:(id)arg1 ;
-(void)setDelegate:(id<MSPSenderMessageStrategyDelegate>)arg1 ;
-(id)participants;
-(void)setState:(id)arg1 ;
-(void)removeParticipants:(id)arg1 ;
-(void)sendMessageIfNeeded;
-(void)_addMessagesParticipants:(id)arg1 ;
-(void)_removeMessagesParticipants:(id)arg1 ;
-(NSMutableSet *)messagesParticipants;
-(void)setMessagesParticipants:(NSMutableSet *)arg1 ;
@end

