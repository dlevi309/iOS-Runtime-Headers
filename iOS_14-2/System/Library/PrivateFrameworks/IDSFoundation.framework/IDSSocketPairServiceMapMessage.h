/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage {

	unsigned char _reason;
	unsigned short _mappedStreamID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) unsigned char reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned short mappedStreamID;              //@synthesize mappedStreamID=_mappedStreamID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                     //@synthesize serviceName=_serviceName - In the implementation block
-(unsigned char)reason;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(NSString *)serviceName;
-(unsigned short)mappedStreamID;
-(id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3 ;
-(unsigned char)command;
@end

