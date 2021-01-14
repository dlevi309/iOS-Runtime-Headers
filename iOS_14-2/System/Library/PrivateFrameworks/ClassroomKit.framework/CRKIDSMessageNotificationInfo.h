/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSDictionary, NSString;

@interface CRKIDSMessageNotificationInfo : NSObject <CRKDictionaryCodable> {

	NSDictionary* _message;
	NSString* _senderAppleID;
	NSString* _senderAddress;

}

@property (nonatomic,copy,readonly) NSDictionary * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderAppleID;                    //@synthesize senderAppleID=_senderAppleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderAddress;                    //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(NSDictionary *)message;
-(NSString *)senderAddress;
-(NSDictionary *)dictionaryValue;
-(NSString *)senderAppleID;
-(id)initWithMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3 ;
@end

