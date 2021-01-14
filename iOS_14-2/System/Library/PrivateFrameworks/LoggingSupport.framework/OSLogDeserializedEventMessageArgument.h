/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSLogEventMessageArgument.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument {

	NSDictionary* _backingDict;
	_OSLogEventSerializationMetadata* _metadata;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                               //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(double)doubleValue;
-(long long)int64Value;
-(unsigned short)rawBytesLength;
-(unsigned long long)scalarCategory;
-(unsigned long long)scalarType;
-(unsigned long long)unsignedInt64Value;
-(D)longDoubleValue;
-(id)objectRepresentation;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(id)_numValue;
-(unsigned long long)category;
-(unsigned long long)privacy;
-(unsigned long long)availability;
-(const void*)rawBytes;
-(_OSLogEventSerializationMetadata *)metadata;
@end

