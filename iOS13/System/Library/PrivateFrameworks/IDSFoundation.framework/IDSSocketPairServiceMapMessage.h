/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)serviceName;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3 ;
-(unsigned short)mappedStreamID;
@end

