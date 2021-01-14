/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)markDescriptor:(int)arg1 forKey:(id)arg2 withObj:(id)arg3 ;
+(void)iterateLogsWithOptions:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)markPurgability:(id)arg1 ;
+(id)createForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(/*^block*/id)arg5 ;
+(void)purgeLogs:(id)arg1 ;
+(void)enableLocalLogCreation;
+(void)cleanupRetired:(id)arg1 ;
+(void)markDescriptor:(int)arg1 withPairs:(id)arg2 andOptions:(id)arg3 ;
+(unsigned)scanLogs:(id)arg1 from:(id)arg2 ;
+(id)locallyCreateForSubmission:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(id*)arg4 writing:(/*^block*/id)arg5 ;
+(id)scanProxies:(id)arg1 ;
-(_sFILE*)stream;
-(void)retire:(const char*)arg1 ;
-(BOOL)isReasonableSize:(long long)arg1 forRouting:(id)arg2 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 usingConfig:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)closeFileStream;
-(id)initWithFilepath:(id)arg1 type:(id)arg2 ;
-(id)initWithType:(id)arg1 filepath:(id)arg2 metadata:(id)arg3 options:(id)arg4 at:(double)arg5 error:(id*)arg6 ;
-(void)markWithKey:(const char*)arg1 value:(const char*)arg2 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3 ;
-(BOOL)deleteOnRetire;
-(void)setDeleteOnRetire:(BOOL)arg1 ;
-(id)description;
-(void)rename:(id)arg1 ;
-(NSString *)bugType;
-(NSDictionary *)metaData;
-(NSString *)filepath;
-(void)dealloc;
@end

