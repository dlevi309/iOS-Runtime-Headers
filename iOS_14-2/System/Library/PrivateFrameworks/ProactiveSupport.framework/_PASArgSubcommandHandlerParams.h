/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class _PASArgSubcommand, NSDictionary, NSArray;

@interface _PASArgSubcommandHandlerParams : NSObject {

	_PASArgSubcommand* _subcommand;
	NSDictionary* _options;
	NSArray* _positionalArguments;

}

@property (nonatomic,readonly) _PASArgSubcommand * subcommand;              //@synthesize subcommand=_subcommand - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * positionalArguments;               //@synthesize positionalArguments=_positionalArguments - In the implementation block
-(NSDictionary *)options;
-(_PASArgSubcommand *)subcommand;
-(id)initWithSubcommand:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3 ;
-(NSArray *)positionalArguments;
@end

