/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@protocol SignpostSerializable <NSObject>
@required
+(id)serializationTypeNumber;
-(id)initWithDictionary:(id)arg1;
-(id)serializeableDictionaryWithShouldRedact:(BOOL)arg1;
-(id)humanReadableType;
-(id)humanReadableDictionaryRepresentation;

@end

