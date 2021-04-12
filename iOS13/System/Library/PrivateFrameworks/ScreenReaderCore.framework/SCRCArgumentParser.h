/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCArgumentSubcommand.h>

@class NSMutableArray, NSString, SCRCArgumentSubcommand;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {

	int _argc;
	char** _argv;
	NSMutableArray* _subcommandArray;
	NSMutableArray* _argumentArray;
	NSString* _appName;
	SCRCArgumentSubcommand* _subcommand;
	BOOL _isLaunchedAtLogin;

}
+(id)processIdentifier;
+(id)versionString;
+(id)commandPath;
-(void)dealloc;
-(int)run;
-(void)stop;
-(BOOL)parse;
-(id)appName;
-(void)setAppName:(id)arg1 ;
-(char**)argv;
-(void)addSubcommand:(id)arg1 ;
-(id)initWithArgc:(int)arg1 argv:(const char**)arg2 ;
-(id)_displayHelp:(id)arg1 ;
-(id)_displayVersion:(id)arg1 ;
-(int)argc;
-(BOOL)isLaunchedAtLogin;
-(id)setRunningAtStartup:(id)arg1 ;
@end

