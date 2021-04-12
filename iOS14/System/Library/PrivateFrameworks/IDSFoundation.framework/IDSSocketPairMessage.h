/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSData, NSString, NSDate;


@protocol IDSSocketPairMessage
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) BOOL didWakeHint; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
@optional
-(void)setSequenceNumber:(unsigned)arg1;
-(unsigned)sequenceNumber;
-(NSData *)data;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1;
-(BOOL)didWakeHint;
-(NSString *)peerResponseIdentifier;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(id)arg1;
-(BOOL)expectsPeerResponse;
-(NSString *)messageUUID;
-(BOOL)wantsAppAck;

@end

