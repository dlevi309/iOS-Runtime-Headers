/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

