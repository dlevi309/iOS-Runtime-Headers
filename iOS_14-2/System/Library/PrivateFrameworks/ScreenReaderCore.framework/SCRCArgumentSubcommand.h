/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class NSString, NSMutableArray, NSArray;

@interface SCRCArgumentSubcommand : NSObject {

	NSString* _subcommandName;
	NSMutableArray* __optionMutableArray;

}

@property (nonatomic,retain) NSMutableArray * _optionMutableArray;              //@synthesize _optionMutableArray=__optionMutableArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * optionArray; 
@property (nonatomic,copy) NSString * subcommandName;                           //@synthesize subcommandName=_subcommandName - In the implementation block
+(id)subcommandWithName:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(int)run;
-(id)init;
-(void)stop;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)showHelp;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)addOption:(char)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(BOOL)arg6 ;
-(NSString *)subcommandName;
-(NSArray *)optionArray;
-(id)formattedHelpHeader;
-(id)formattedHelpFooter;
-(NSMutableArray *)_optionMutableArray;
-(void)stopDueToSigTerm;
-(void)setSubcommandName:(NSString *)arg1 ;
-(void)set_optionMutableArray:(NSMutableArray *)arg1 ;
@end

