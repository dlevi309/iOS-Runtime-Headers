/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BCSChatSuggestMessage *)message;
-(void)setMessage:(BCSChatSuggestMessage *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMessage;
-(NSString *)phone;
-(void)setPhone:(NSString *)arg1 ;
-(BOOL)hasPhone;
@end

