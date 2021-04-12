/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/OSLogEventDecomposedMessage.h>

@class NSDictionary, NSArray;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage {

	NSDictionary* _backingDict;
	NSArray* _segments;

}

@property (nonatomic,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) NSDictionary * backingDict;              //@synthesize backingDict=_backingDict - In the implementation block
-(id)argumentAtIndex:(unsigned long long)arg1 ;
-(id)placeholderAtIndex:(unsigned long long)arg1 ;
-(id)literalPrefixAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeholderCount;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(NSArray *)segments;
-(unsigned long long)state;
@end

