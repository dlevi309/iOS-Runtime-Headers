/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString, NSMutableArray, NSMutableSet;

@interface _PASArgSubcommand : NSObject {

	NSString* _name;
	NSString* _helpDescription;
	/*^block*/id _handler;
	NSMutableArray* _registeredOptions;
	NSMutableSet* _requiredOptions;

}

@property (nonatomic,retain) NSMutableArray * registeredOptions;              //@synthesize registeredOptions=_registeredOptions - In the implementation block
@property (nonatomic,retain) NSMutableSet * requiredOptions;                  //@synthesize requiredOptions=_requiredOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * helpDescription;               //@synthesize helpDescription=_helpDescription - In the implementation block
@property (nonatomic,readonly) id handler;                                    //@synthesize handler=_handler - In the implementation block
+(id)subcommandWithName:(id)arg1 help:(id)arg2 handler:(/*^block*/id)arg3 ;
+(id)simpleSubcommandWithHelpGenerator:(/*^block*/id)arg1 name:(id)arg2 help:(id)arg3 handler:(/*^block*/id)arg4 ;
-(NSString *)name;
-(id)description;
-(NSString *)helpDescription;
-(id)initWithName:(id)arg1 help:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)registerOption:(id)arg1 ;
-(id)optionShortHelp;
-(id)optionLongHelp;
-(NSMutableArray *)registeredOptions;
-(id)naiveUsageHelpWithPositionalArgString:(id)arg1 ;
-(id)customUsageHelpWithUsageOverride:(id)arg1 positionalArgString:(id)arg2 optionHelpOverride:(id)arg3 additionalHelpText:(id)arg4 ;
-(void)setRegisteredOptions:(NSMutableArray *)arg1 ;
-(NSMutableSet *)requiredOptions;
-(void)setRequiredOptions:(NSMutableSet *)arg1 ;
-(id)handler;
@end

