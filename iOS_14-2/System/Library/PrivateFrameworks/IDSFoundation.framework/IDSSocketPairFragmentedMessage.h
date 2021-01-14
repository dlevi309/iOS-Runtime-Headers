/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>
#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessage> {

	unsigned long long _offset;
	unsigned _fragmentedMessageID;
	unsigned _fragmentIndex;
	unsigned _totalFragmentCount;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned fragmentedMessageID;                   //@synthesize fragmentedMessageID=_fragmentedMessageID - In the implementation block
@property (nonatomic,readonly) unsigned fragmentIndex;                         //@synthesize fragmentIndex=_fragmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned totalFragmentCount;                    //@synthesize totalFragmentCount=_totalFragmentCount - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
+(id)createOriginalMessageFromFragmentedMessages:(id)arg1 ;
+(id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentSize:(unsigned)arg3 ;
-(id)description;
-(NSData *)data;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentIndex:(unsigned)arg3 totalFragmentCount:(unsigned)arg4 ;
-(unsigned)fragmentIndex;
-(unsigned)totalFragmentCount;
-(unsigned)fragmentedMessageID;
-(unsigned char)command;
@end

