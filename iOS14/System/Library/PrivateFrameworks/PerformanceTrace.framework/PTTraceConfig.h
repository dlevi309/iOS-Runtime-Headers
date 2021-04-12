/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PerformanceTrace.framework/PerformanceTrace
*/

#import <PerformanceTrace/PerformanceTrace-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSURL, NSString, NSXPCConnection;

@interface PTTraceConfig : NSObject <NSCopying, NSSecureCoding> {

	BOOL _symbolicate;
	BOOL _compressWhenFinished;
	BOOL _includeOSLogs;
	BOOL _includeOSSignposts;
	BOOL _skipNotification;
	BOOL _includeKernelStacks;
	int _ownerPID;
	unsigned _kernelBufferDrainQoS;
	unsigned long long _callstackSamplingRateMS;
	NSMutableArray* _traceGroups;
	unsigned long long _source;
	unsigned long long _traceType;
	NSURL* _traceDirectoryURL;
	NSString* _traceName;
	NSString* _ownerName;
	unsigned long long _traceTimeoutS;
	unsigned long long _kernelBufferSizeMB;
	unsigned long long _kernelBufferDrainRateMS;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL symbolicate;                                        //@synthesize symbolicate=_symbolicate - In the implementation block
@property (assign,nonatomic) unsigned long long callstackSamplingRateMS;              //@synthesize callstackSamplingRateMS=_callstackSamplingRateMS - In the implementation block
@property (nonatomic,retain) NSMutableArray * traceGroups;                            //@synthesize traceGroups=_traceGroups - In the implementation block
@property (assign,nonatomic) unsigned long long source;                               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long traceType;                            //@synthesize traceType=_traceType - In the implementation block
@property (nonatomic,retain) NSURL * traceDirectoryURL;                               //@synthesize traceDirectoryURL=_traceDirectoryURL - In the implementation block
@property (nonatomic,retain) NSString * traceName;                                    //@synthesize traceName=_traceName - In the implementation block
@property (assign,nonatomic) int ownerPID;                                            //@synthesize ownerPID=_ownerPID - In the implementation block
@property (nonatomic,retain) NSString * ownerName;                                    //@synthesize ownerName=_ownerName - In the implementation block
@property (assign,nonatomic) BOOL compressWhenFinished;                               //@synthesize compressWhenFinished=_compressWhenFinished - In the implementation block
@property (assign,nonatomic) BOOL includeOSLogs;                                      //@synthesize includeOSLogs=_includeOSLogs - In the implementation block
@property (assign,nonatomic) BOOL includeOSSignposts;                                 //@synthesize includeOSSignposts=_includeOSSignposts - In the implementation block
@property (assign,nonatomic) unsigned long long traceTimeoutS;                        //@synthesize traceTimeoutS=_traceTimeoutS - In the implementation block
@property (assign,nonatomic) BOOL skipNotification;                                   //@synthesize skipNotification=_skipNotification - In the implementation block
@property (assign,nonatomic) BOOL includeKernelStacks;                                //@synthesize includeKernelStacks=_includeKernelStacks - In the implementation block
@property (assign,nonatomic) unsigned long long kernelBufferSizeMB;                   //@synthesize kernelBufferSizeMB=_kernelBufferSizeMB - In the implementation block
@property (assign,nonatomic) unsigned kernelBufferDrainQoS;                           //@synthesize kernelBufferDrainQoS=_kernelBufferDrainQoS - In the implementation block
@property (assign,nonatomic) unsigned long long kernelBufferDrainRateMS;              //@synthesize kernelBufferDrainRateMS=_kernelBufferDrainRateMS - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)resetConfig;
+(id)configWithTemplate:(unsigned long long)arg1 ;
+(id)configWithDictionary:(id)arg1 ;
+(id)getCurrentConfig;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setTraceType:(unsigned long long)arg1 ;
-(NSXPCConnection *)connection;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)traceType;
-(NSString *)ownerName;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)source;
-(BOOL)symbolicate;
-(void)_invalidateSession;
-(void)setSymbolicate:(BOOL)arg1 ;
-(void)setCallstackSamplingRateMS:(unsigned long long)arg1 ;
-(void)setTraceDirectoryURL:(NSURL *)arg1 ;
-(void)setTraceName:(NSString *)arg1 ;
-(void)setTraceGroups:(NSMutableArray *)arg1 ;
-(void)setCompressWhenFinished:(BOOL)arg1 ;
-(void)setIncludeOSLogs:(BOOL)arg1 ;
-(void)setIncludeOSSignposts:(BOOL)arg1 ;
-(void)setTraceTimeoutS:(unsigned long long)arg1 ;
-(void)setSkipNotification:(BOOL)arg1 ;
-(void)setIncludeKernelStacks:(BOOL)arg1 ;
-(void)setKernelBufferSizeMB:(unsigned long long)arg1 ;
-(unsigned long long)kernelBufferSizeMB;
-(void)setKernelBufferDrainQoS:(unsigned)arg1 ;
-(void)setKernelBufferDrainRateMS:(unsigned long long)arg1 ;
-(void)setOwnerPID:(int)arg1 ;
-(int)ownerPID;
-(void)_initConnection;
-(id)_getRemoteObjectProxy;
-(unsigned long long)callstackSamplingRateMS;
-(NSMutableArray *)traceGroups;
-(NSURL *)traceDirectoryURL;
-(NSString *)traceName;
-(BOOL)compressWhenFinished;
-(BOOL)includeOSLogs;
-(BOOL)includeOSSignposts;
-(unsigned long long)traceTimeoutS;
-(BOOL)skipNotification;
-(BOOL)includeKernelStacks;
-(unsigned)kernelBufferDrainQoS;
-(unsigned long long)kernelBufferDrainRateMS;
-(BOOL)storeConfig;
-(BOOL)validateConfig;
@end

