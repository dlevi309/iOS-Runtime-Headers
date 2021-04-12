/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSArray, NSString;

@interface FPTask : NSObject {

	NSArray* _argv;
	NSString* _redirectStdoutToFileAtPath;
	int _redirectStdoutToFileDescriptor;
	NSString* _redirectStderrToFileAtPath;
	int _redirectStderrToFileDescriptor;
	int _waitStatus;

}

@property (nonatomic,retain) NSArray * argv;                                     //@synthesize argv=_argv - In the implementation block
@property (nonatomic,retain) NSString * redirectStdoutToFileAtPath;              //@synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStdoutToFileDescriptor;                 //@synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor - In the implementation block
@property (nonatomic,retain) NSString * redirectStderrToFileAtPath;              //@synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath - In the implementation block
@property (assign,nonatomic) int redirectStderrToFileDescriptor;                 //@synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor - In the implementation block
@property (nonatomic,readonly) int waitStatus;                                   //@synthesize waitStatus=_waitStatus - In the implementation block
+(id)taskWithCommandWithArguments:(id)arg1 ;
+(id)taskWithCommand:(id)arg1 ;
+(id)sanitizeStringForFilename:(id)arg1 ;
+(id)taskWithRedirectedOutputAndCommand:(id)arg1 ;
-(id)init;
-(void)setCommandWithArguments:(id)arg1 ;
-(void)setArgv:(NSArray *)arg1 ;
-(NSArray *)argv;
-(NSString *)redirectStdoutToFileAtPath;
-(NSString *)redirectStderrToFileAtPath;
-(int)redirectStdoutToFileDescriptor;
-(int)redirectStderrToFileDescriptor;
-(void)setRedirectStdoutToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStdoutToFileDescriptor:(int)arg1 ;
-(void)setRedirectStderrToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStderrToFileDescriptor:(int)arg1 ;
-(void)setCommand:(id)arg1 ;
-(int)exec;
-(void)resetRedirect;
-(int)waitStatus;
@end

