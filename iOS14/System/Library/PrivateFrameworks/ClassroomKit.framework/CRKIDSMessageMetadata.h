/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSUUID, NSDictionary;

@interface CRKIDSMessageMetadata : NSObject <CRKDictionaryCodable> {

	NSUUID* _messageIdentifier;
	long long _messageType;
	long long _messagingVersion;

}

@property (nonatomic,readonly) NSUUID * messageIdentifier;                       //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,readonly) long long messageType;                            //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,readonly) long long messagingVersion;                       //@synthesize messagingVersion=_messagingVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
+(id)metadataWithMessageType:(long long)arg1 ;
-(long long)messageType;
-(NSUUID *)messageIdentifier;
-(NSDictionary *)dictionaryValue;
-(id)initWithMessageIdentifier:(id)arg1 messageType:(long long)arg2 messagingVersion:(long long)arg3 ;
-(long long)messagingVersion;
@end

