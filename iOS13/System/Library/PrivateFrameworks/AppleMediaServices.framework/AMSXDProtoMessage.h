/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AMSXDProtoMessage : PBCodable <NSCopying> {

	NSString* _logKey;
	NSData* _messageData;

}

@property (nonatomic,retain) NSData * messageData;              //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,readonly) BOOL hasLogKey; 
@property (nonatomic,retain) NSString * logKey;                 //@synthesize logKey=_logKey - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(BOOL)hasLogKey;
@end

