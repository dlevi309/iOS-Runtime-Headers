/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
+(id)createOriginalMessageFromFragmentedMessages:(id)arg1 ;
+(id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentSize:(unsigned)arg3 ;
-(id)description;
-(NSData *)data;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(unsigned)totalFragmentCount;
-(id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned)arg2 fragmentIndex:(unsigned)arg3 totalFragmentCount:(unsigned)arg4 ;
-(unsigned)fragmentedMessageID;
-(unsigned)fragmentIndex;
@end

