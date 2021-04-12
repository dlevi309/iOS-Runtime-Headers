/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

@class NSData, NSString, NSDate;


@protocol IDSSocketPairMessage
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
@optional
-(NSData *)data;
-(void)setSequenceNumber:(unsigned)arg1;
-(unsigned)sequenceNumber;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(id)arg1;
-(NSString *)messageUUID;
-(BOOL)wantsAppAck;
-(BOOL)expectsPeerResponse;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1;
-(NSString *)peerResponseIdentifier;

@end

