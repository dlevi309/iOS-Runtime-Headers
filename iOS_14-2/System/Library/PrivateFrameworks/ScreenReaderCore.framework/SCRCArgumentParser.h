/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSString, NSMutableArray, SCRCArgumentSubcommand, NSArray;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {

	BOOL _isLaunchedAtLogin;
	NSString* _appName;
	NSMutableArray* __subcommandArray;
	SCRCArgumentSubcommand* __subcommand;
	NSArray* __arguments;

}

@property (nonatomic,retain) NSMutableArray * _subcommandArray;                 //@synthesize _subcommandArray=__subcommandArray - In the implementation block
@property (nonatomic,retain) SCRCArgumentSubcommand * _subcommand;              //@synthesize _subcommand=__subcommand - In the implementation block
@property (nonatomic,copy) NSArray * _arguments;                                //@synthesize _arguments=__arguments - In the implementation block
@property (assign,nonatomic) BOOL isLaunchedAtLogin;                            //@synthesize isLaunchedAtLogin=_isLaunchedAtLogin - In the implementation block
@property (nonatomic,copy) NSString * appName;                                  //@synthesize appName=_appName - In the implementation block
+(id)versionString;
+(id)processIdentifier;
+(id)commandPath;
-(BOOL)parse;
-(int)run;
-(void)setAppName:(NSString *)arg1 ;
-(NSArray *)_arguments;
-(void)stop;
-(SCRCArgumentSubcommand *)_subcommand;
-(NSString *)appName;
-(void)addSubcommand:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(id)_displayHelp:(id)arg1 ;
-(void)set_arguments:(NSArray *)arg1 ;
-(id)_displayVersion:(id)arg1 ;
-(NSMutableArray *)_subcommandArray;
-(void)set_subcommand:(SCRCArgumentSubcommand *)arg1 ;
-(void)setIsLaunchedAtLogin:(BOOL)arg1 ;
-(id)setRunningAtStartup:(id)arg1 ;
-(BOOL)isLaunchedAtLogin;
-(void)set_subcommandArray:(NSMutableArray *)arg1 ;
@end

