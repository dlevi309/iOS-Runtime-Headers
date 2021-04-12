/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BCSChatSuggestMessage, NSString;

@interface BCSChatSuggestWrapper : PBCodable <NSCopying> {

	BCSChatSuggestMessage* _message;
	NSString* _phone;

}

@property (nonatomic,readonly) BOOL hasPhone; 
@property (nonatomic,retain) NSString * phone;                             //@synthesize phone=_phone - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) BCSChatSuggestMessage * message;              //@synthesize message=_message - In the implementation block
-(void)setMessage:(BCSChatSuggestMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(BCSChatSuggestMessage *)message;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)phone;
-(id)description;
-(BOOL)hasMessage;
-(void)setPhone:(NSString *)arg1 ;
-(BOOL)hasPhone;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

