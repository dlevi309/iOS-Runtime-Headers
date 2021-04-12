/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign) unsigned long long messageType;                         //@synthesize messageType=_messageType - In the implementation block
@property (assign) double timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * fromPeerDisplayName;               //@synthesize fromPeerDisplayName=_fromPeerDisplayName - In the implementation block
@property (nonatomic,retain) NSArray * toPeerDisplays;                     //@synthesize toPeerDisplays=_toPeerDisplays - In the implementation block
@property (assign) long long cmDataType;                                   //@synthesize cmDataType=_cmDataType - In the implementation block
@property (nonatomic,retain) NSData * cmData;                              //@synthesize cmData=_cmData - In the implementation block
@property (nonatomic,retain) NSData * cmAdditionalData;                    //@synthesize cmAdditionalData=_cmAdditionalData - In the implementation block
@property (nonatomic,retain) NSNumber * sessionID;                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSNumber * movLowestTimestamp;                //@synthesize movLowestTimestamp=_movLowestTimestamp - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) PRPeer * prPeer;                                        //@synthesize prPeer=_prPeer - In the implementation block
@property (retain) PRCollaborationData * prCollaborationData;              //@synthesize prCollaborationData=_prCollaborationData - In the implementation block
@property (assign) BOOL isSent;                                            //@synthesize isSent=_isSent - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(double)timestamp;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(unsigned long long)messageType;
-(void)setMessageType:(unsigned long long)arg1 ;
-(BOOL)isSent;
-(void)setIsSent:(BOOL)arg1 ;
-(PRCollaborationData *)prCollaborationData;
-(PRPeer *)prPeer;
-(void)setPrCollaborationData:(PRCollaborationData *)arg1 ;
-(void)setPrPeer:(PRPeer *)arg1 ;
-(NSString *)fromPeerDisplayName;
-(long long)cmDataType;
-(NSData *)cmData;
-(NSData *)cmAdditionalData;
-(void)setFromPeerDisplayName:(NSString *)arg1 ;
-(void)setToPeerDisplays:(NSArray *)arg1 ;
-(void)setCmDataType:(long long)arg1 ;
-(void)setCmData:(NSData *)arg1 ;
-(void)setCmAdditionalData:(NSData *)arg1 ;
-(void)setMovLowestTimestamp:(NSNumber *)arg1 ;
-(NSArray *)toPeerDisplays;
-(NSNumber *)movLowestTimestamp;
-(id)initWithMessageType:(unsigned long long)arg1 ;
@end

