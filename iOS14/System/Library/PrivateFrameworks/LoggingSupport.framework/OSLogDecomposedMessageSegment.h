/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class NSDictionary, NSString, OSLogDeserializedMessagePlaceholder, OSLogDeserializedEventMessageArgument;

@interface OSLogDecomposedMessageSegment : NSObject {

	NSDictionary* _backingDict;
	NSString* _literalPrefix;
	OSLogDeserializedMessagePlaceholder* _placeholder;
	OSLogDeserializedEventMessageArgument* _argument;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                                     //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) NSString * literalPrefix;                                       //@synthesize literalPrefix=_literalPrefix - In the implementation block
@property (nonatomic,readonly) OSLogDeserializedMessagePlaceholder * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) OSLogDeserializedEventMessageArgument * argument;               //@synthesize argument=_argument - In the implementation block
-(OSLogDeserializedEventMessageArgument *)argument;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(NSString *)literalPrefix;
-(OSLogDeserializedMessagePlaceholder *)placeholder;
@end

