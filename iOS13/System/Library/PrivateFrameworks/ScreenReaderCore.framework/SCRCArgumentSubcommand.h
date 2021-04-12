/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class NSString, NSMutableArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* _optionArray;

}
+(id)subcommandWithName:(id)arg1 ;
-(int)run;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)stop;
-(void)showHelp;
-(void)addOption:(char)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(id)optionArray;
-(id)subcommandName;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(void)addOptions;
-(void)stopDueToSigTerm;
@end

