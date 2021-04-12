/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
*/


#import <OSAnalytics/OSAnalytics-Structs.h>
@class NSDictionary, NSString;

@interface OSALog : NSObject {

	_sFILE* _stream;
	NSDictionary* _metaData;
	NSString* _filepath;
	BOOL _preserveFiles;
	BOOL _deleteOnRetire;
	NSString* _bugType;

}

@property (readonly) _sFILE* stream;                       //@synthesize stream=_stream - In the implementation block
@property (readonly) NSDictionary * metaData;              //@synthesize metaData=_metaData - In the implementation block
@property (readonly) NSString * filepath;                  //@synthesize filepath=_filepath - In the implementation block
@property (assign) BOOL deleteOnRetire;                    //@synthesize deleteOnRetire=_deleteOnRetire - In the implementation block
@property (readonly) NSString * bugType;                   //@synthesize bugType=_bugType - In the implementation block
+(id)createForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(/*^block*/id)arg5 ;
+(void)iterateLogsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)markDescriptor:(int)arg1 withPairs:(id)arg2 andOptions:(id)arg3 ;
+(id)locallyCreateForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(/*^block*/id)arg5 ;
+(void)markDescriptor:(int)arg1 forKey:(id)arg2 withObj:(id)arg3 ;
+(void)enableLocalLogCreation;
+(void)cleanupRetired:(id)arg1 ;
+(id)scanProxies:(id)arg1 ;
+(unsigned)scanLogs:(id)arg1 from:(id)arg2 ;
+(void)purgeLogs:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(_sFILE*)stream;
-(NSDictionary *)metaData;
-(BOOL)isReasonableSize:(long long)arg1 forRouting:(id)arg2 ;
-(void)retire:(const char*)arg1 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)closeFileStream;
-(id)initWithType:(id)arg1 filepath:(id)arg2 metadata:(id)arg3 options:(id)arg4 at:(double)arg5 error:(id*)arg6 ;
-(id)initWithFilepath:(id)arg1 type:(id)arg2 ;
-(NSString *)filepath;
-(void)rename:(id)arg1 ;
-(void)markWithKey:(const char*)arg1 value:(const char*)arg2 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 ;
-(BOOL)deleteOnRetire;
-(void)setDeleteOnRetire:(BOOL)arg1 ;
-(NSString *)bugType;
@end

