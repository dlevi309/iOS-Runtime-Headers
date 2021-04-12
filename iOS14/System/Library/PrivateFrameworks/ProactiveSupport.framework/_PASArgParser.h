/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableArray, NSMutableSet;

@interface _PASArgParser : NSObject {

	NSMutableArray* _registeredSubcommands;
	NSMutableArray* _registeredOptions;
	NSMutableSet* _requiredOptions;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSMutableArray * registeredSubcommands;              //@synthesize registeredSubcommands=_registeredSubcommands - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredOptions;                  //@synthesize registeredOptions=_registeredOptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * requiredOptions;                        //@synthesize requiredOptions=_requiredOptions - In the implementation block
@property (nonatomic,readonly) id handler;                                          //@synthesize handler=_handler - In the implementation block
+(id)boolValueForArgument:(id)arg1 error:(id*)arg2 ;
+(id)numberValueForArgument:(id)arg1 error:(id*)arg2 ;
+(id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id*)arg3 ;
+(id)parserWithHandler:(/*^block*/id)arg1 ;
+(id)simpleParserWithHelpGenerator:(/*^block*/id)arg1 version:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)description;
-(void)registerOption:(id)arg1 ;
-(id)optionShortHelp;
-(id)optionLongHelp;
-(NSMutableArray *)registeredOptions;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg1 ;
-(NSMutableSet *)requiredOptions;
-(void)setRequiredOptions:(NSMutableSet *)arg1 ;
-(void)registerSubcommand:(id)arg1 ;
-(id)subcommandLongHelp;
-(int)invokeHandlerWithArguments:(const char**)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id*)arg4 ;
-(id)_argumentParseTemplate:(id)arg1 longArgs:(option*)arg2 ;
-(NSMutableArray *)registeredSubcommands;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
@end

