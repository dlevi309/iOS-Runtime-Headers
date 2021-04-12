/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSLogMessagePlaceholder.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder {

	NSDictionary* _backingDict;
	_OSLogEventSerializationMetadata* _metadata;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                               //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(int)precision;
-(id)tokens;
-(int)width;
-(id)typeNamespace;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(id)type;
-(id)rawString;
-(_OSLogEventSerializationMetadata *)metadata;
@end

