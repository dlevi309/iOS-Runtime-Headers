/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSDictionary, CRKIDSMessageMetadata;

@interface CRKIDSMessagePayload : NSObject <CRKDictionaryCodable> {

	CRKIDSMessageMetadata* _messageMetadata;
	NSDictionary* _messageContent;

}

@property (nonatomic,readonly) CRKIDSMessageMetadata * messageMetadata;              //@synthesize messageMetadata=_messageMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messageContent;                   //@synthesize messageContent=_messageContent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(NSDictionary *)messageContent;
-(CRKIDSMessageMetadata *)messageMetadata;
-(id)initWithMessageContent:(id)arg1 messageMetadata:(id)arg2 ;
@end

