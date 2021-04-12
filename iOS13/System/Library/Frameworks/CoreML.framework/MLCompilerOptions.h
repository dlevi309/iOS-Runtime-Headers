/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString;

@interface MLCompilerOptions : NSObject {

	BOOL _dryRun;
	NSString* _platform;
	NSString* _platformVersion;

}

@property (assign) BOOL dryRun;                             //@synthesize dryRun=_dryRun - In the implementation block
@property (retain) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (retain) NSString * platformVersion;              //@synthesize platformVersion=_platformVersion - In the implementation block
+(id)defaultOptions;
-(id)init;
-(NSString *)platform;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)platformVersion;
-(void)setPlatformVersion:(NSString *)arg1 ;
@end

