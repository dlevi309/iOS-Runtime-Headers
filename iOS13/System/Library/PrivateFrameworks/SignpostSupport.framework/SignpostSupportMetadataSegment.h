/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSString, NSArray, SignpostSupportMessageArgument;

@interface SignpostSupportMetadataSegment : NSObject {

	NSString* _typeNamespace;
	NSString* _type;
	NSArray* _placeholderTokens;
	NSString* _stringPrefix;
	SignpostSupportMessageArgument* _argument;

}

@property (nonatomic,readonly) NSString * typeNamespace;                               //@synthesize typeNamespace=_typeNamespace - In the implementation block
@property (nonatomic,readonly) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSArray * placeholderTokens;                            //@synthesize placeholderTokens=_placeholderTokens - In the implementation block
@property (nonatomic,readonly) NSString * stringPrefix;                                //@synthesize stringPrefix=_stringPrefix - In the implementation block
@property (nonatomic,readonly) SignpostSupportMessageArgument * argument;              //@synthesize argument=_argument - In the implementation block
+(id)placeholderArrayWithOSLogEventProxy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(SignpostSupportMessageArgument *)argument;
-(NSString *)typeNamespace;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 shouldRedact:(BOOL)arg2 didRedactOut:(BOOL*)arg3 ;
-(NSArray *)placeholderTokens;
-(NSString *)stringPrefix;
-(id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5 ;
@end

