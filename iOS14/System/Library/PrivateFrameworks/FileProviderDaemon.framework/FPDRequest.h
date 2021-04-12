/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FPDRequest : NSObject <NSSecureCoding> {

	BOOL _fromPOSIX;
	int _pid;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                         //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;                      //@synthesize executablePath=_executablePath - In the implementation block
@property (getter=isFromPOSIX,nonatomic,readonly) BOOL fromPOSIX;              //@synthesize fromPOSIX=_fromPOSIX - In the implementation block
@property (nonatomic,readonly) NSString * shortDescription; 
+(BOOL)supportsSecureCoding;
+(id)requestForSelf;
+(id)requestForPID:(int)arg1 ;
+(id)requestForPID:(int)arg1 fromPOSIX:(BOOL)arg2 ;
+(id)UUIDForExecutablePath:(id)arg1 ;
-(int)pid;
-(NSString *)executablePath;
-(NSString *)processName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)nsfpRequestWithIdentifier:(id)arg1 forSession:(id)arg2 ;
-(id)initWithPID:(int)arg1 fromPOSIX:(BOOL)arg2 ;
-(BOOL)isFromPOSIX;
@end

