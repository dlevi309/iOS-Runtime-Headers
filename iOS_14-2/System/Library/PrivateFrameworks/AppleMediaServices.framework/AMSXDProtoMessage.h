/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setLogKey:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasLogKey;
-(unsigned long long)hash;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)logKey;
-(NSData *)messageData;
@end

