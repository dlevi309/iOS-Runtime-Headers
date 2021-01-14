/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSNumber, NSUUID, PRPeer, PRCollaborationData;

@interface CMMessage : NSObject <NSSecureCoding> {

	BOOL _isSent;
	unsigned long long _messageType;
	double _timestamp;
	NSString* _fromPeerDisplayName;
	NSArray* _toPeerDisplays;
	long long _cmDataType;
	NSData* _cmData;
	NSData* _cmAdditionalData;
	NSNumber* _sessionID;
	NSNumber* _movLowestTimestamp;
	NSUUID* _uuid;
	PRPeer* _prPeer;
	PRCollaborationData* _prCollaborationData;

}

@property (assign,nonatomic) unsigned long long messageType;                         //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) double timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * fromPeerDisplayName;                         //@synthesize fromPeerDisplayName=_fromPeerDisplayName - In the implementation block
@property (nonatomic,retain) NSArray * toPeerDisplays;                               //@synthesize toPeerDisplays=_toPeerDisplays - In the implementation block
@property (assign,nonatomic) long long cmDataType;                                   //@synthesize cmDataType=_cmDataType - In the implementation block
@property (nonatomic,retain) NSData * cmData;                                        //@synthesize cmData=_cmData - In the implementation block
@property (nonatomic,retain) NSData * cmAdditionalData;                              //@synthesize cmAdditionalData=_cmAdditionalData - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSNumber * movLowestTimestamp;                          //@synthesize movLowestTimestamp=_movLowestTimestamp - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) PRPeer * prPeer;                                        //@synthesize prPeer=_prPeer - In the implementation block
@property (nonatomic,retain) PRCollaborationData * prCollaborationData;              //@synthesize prCollaborationData=_prCollaborationData - In the implementation block
@property (assign,nonatomic) BOOL isSent;                                            //@synthesize isSent=_isSent - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)messageType;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(void)setMessageType:(unsigned long long)arg1 ;
-(NSUUID *)uuid;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSent;
-(id)description;
-(NSData *)cmData;
-(PRPeer *)prPeer;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)fromPeerDisplayName;
-(long long)cmDataType;
-(NSData *)cmAdditionalData;
-(void)setFromPeerDisplayName:(NSString *)arg1 ;
-(void)setToPeerDisplays:(NSArray *)arg1 ;
-(void)setCmDataType:(long long)arg1 ;
-(void)setCmData:(NSData *)arg1 ;
-(void)setCmAdditionalData:(NSData *)arg1 ;
-(void)setMovLowestTimestamp:(NSNumber *)arg1 ;
-(void)setPrPeer:(PRPeer *)arg1 ;
-(void)setPrCollaborationData:(PRCollaborationData *)arg1 ;
-(NSArray *)toPeerDisplays;
-(NSNumber *)movLowestTimestamp;
-(PRCollaborationData *)prCollaborationData;
-(id)initWithMessageType:(unsigned long long)arg1 ;
@end

