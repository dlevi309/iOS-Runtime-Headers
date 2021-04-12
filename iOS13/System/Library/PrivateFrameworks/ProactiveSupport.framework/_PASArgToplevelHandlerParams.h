/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASArgParser, NSDictionary, NSArray;

@interface _PASArgToplevelHandlerParams : NSObject {

	_PASArgParser* _parser;
	NSDictionary* _options;
	NSArray* _positionalArguments;

}

@property (nonatomic,readonly) _PASArgParser * parser;                     //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * positionalArguments;              //@synthesize positionalArguments=_positionalArguments - In the implementation block
-(NSDictionary *)options;
-(_PASArgParser *)parser;
-(NSArray *)positionalArguments;
-(id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3 ;
@end

