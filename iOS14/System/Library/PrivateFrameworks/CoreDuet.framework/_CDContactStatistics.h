/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding> {

	unsigned long long _outgoingRecipientCount;
	unsigned long long _incomingSenderCount;
	unsigned long long _incomingRecipientCount;
	NSDate* _lastOutgoingRecipientDate;
	NSDate* _lastIncomingSenderDate;
	NSDate* _lastIncomingRecipientDate;
	NSDate* _firstOutgoingRecipientDate;
	NSDate* _firstIncomingSenderDate;
	NSDate* _firstIncomingRecipientDate;

}

@property (assign) unsigned long long outgoingRecipientCount;              //@synthesize outgoingRecipientCount=_outgoingRecipientCount - In the implementation block
@property (assign) unsigned long long incomingSenderCount;                 //@synthesize incomingSenderCount=_incomingSenderCount - In the implementation block
@property (assign) unsigned long long incomingRecipientCount;              //@synthesize incomingRecipientCount=_incomingRecipientCount - In the implementation block
@property (retain) NSDate * lastOutgoingRecipientDate;                     //@synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * lastIncomingSenderDate;                        //@synthesize lastIncomingSenderDate=_lastIncomingSenderDate - In the implementation block
@property (retain) NSDate * lastIncomingRecipientDate;                     //@synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate - In the implementation block
@property (retain) NSDate * firstOutgoingRecipientDate;                    //@synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * firstIncomingSenderDate;                       //@synthesize firstIncomingSenderDate=_firstIncomingSenderDate - In the implementation block
@property (retain) NSDate * firstIncomingRecipientDate;                    //@synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFirstIncomingSenderDate:(NSDate *)arg1 ;
-(NSDate *)lastIncomingSenderDate;
-(NSDate *)firstIncomingSenderDate;
-(id)firstInteractionDate;
-(unsigned long long)interactionCount;
-(id)lastInteractionDate;
-(NSDate *)firstIncomingRecipientDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastOutgoingRecipientDate;
-(void)setFirstIncomingRecipientDate:(NSDate *)arg1 ;
-(void)setLastIncomingSenderDate:(NSDate *)arg1 ;
-(id)lastDate:(id)arg1 updatedWith:(id)arg2 ;
-(id)firstDate:(id)arg1 updatedWith:(id)arg2 ;
-(id)description;
-(unsigned long long)incomingSenderCount;
-(double)incomingSenderTimeInterval;
-(void)setFirstOutgoingRecipientDate:(NSDate *)arg1 ;
-(void)setLastOutgoingRecipientDate:(NSDate *)arg1 ;
-(double)interactionTimeInterval;
-(void)setIncomingRecipientCount:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncomingSenderCount:(unsigned long long)arg1 ;
-(NSDate *)firstOutgoingRecipientDate;
-(void)updateWithStatistics:(id)arg1 ;
-(double)incomingRecipientTimeInterval;
-(unsigned long long)incomingRecipientCount;
-(void)setLastIncomingRecipientDate:(NSDate *)arg1 ;
-(unsigned long long)outgoingRecipientCount;
-(NSDate *)lastIncomingRecipientDate;
-(void)setOutgoingRecipientCount:(unsigned long long)arg1 ;
-(double)outgoingRecipientTimeInterval;
@end

