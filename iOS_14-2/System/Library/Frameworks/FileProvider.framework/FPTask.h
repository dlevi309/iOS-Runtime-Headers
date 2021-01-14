/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)argv;
-(int)exec;
-(id)init;
-(void)setArgv:(NSArray *)arg1 ;
-(int)waitStatus;
-(void)setCommandWithArguments:(id)arg1 ;
-(NSString *)redirectStdoutToFileAtPath;
-(NSString *)redirectStderrToFileAtPath;
-(int)redirectStdoutToFileDescriptor;
-(int)redirectStderrToFileDescriptor;
-(void)setRedirectStdoutToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStdoutToFileDescriptor:(int)arg1 ;
-(void)setRedirectStderrToFileAtPath:(NSString *)arg1 ;
-(void)setRedirectStderrToFileDescriptor:(int)arg1 ;
-(void)resetRedirect;
-(void)setCommand:(id)arg1 ;
@end

