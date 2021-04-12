/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSDictionary, NSData, NSArray, ENXPCServiceClient, NSDate;

@interface ENFileSession : NSObject {

	BOOL _activateCalled;
	BOOL _activateSucceeded;
	BOOL _invalidated;
	unsigned _flags;
	unsigned long long _batchSize;
	unsigned long long _invalidKeyCount;
	NSDictionary* _metadata;
	NSData* _sha256Data;
	NSArray* _signatures;
	ENXPCServiceClient* _serviceClient;

}

@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long invalidKeyCount;              //@synthesize invalidKeyCount=_invalidKeyCount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSData * sha256Data;                        //@synthesize sha256Data=_sha256Data - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatures;                       //@synthesize signatures=_signatures - In the implementation block
@property (nonatomic,readonly) ENXPCServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
-(NSDate *)endDate;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(NSDate *)startDate;
-(unsigned)flags;
-(ENXPCServiceClient *)serviceClient;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithServiceClient:(id)arg1 ;
-(void)invalidate;
-(NSDictionary *)metadata;
-(NSArray *)signatures;
-(void)dealloc;
-(NSData *)sha256Data;
-(id)_activateCreateXPCRequestWithPath:(id)arg1 archive:(BOOL)arg2 signatureData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_activateSyncWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_activateCreateXPCRequestWithFD:(int)arg1 archive:(BOOL)arg2 signatureData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_activateHandleReply:(id)arg1 error:(id*)arg2 ;
-(id)_readTEKBatchHandleReply:(id)arg1 error:(id*)arg2 ;
-(BOOL)activateWithArchivePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)activateWithFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(BOOL)activateWithFilePath:(id)arg1 error:(id*)arg2 ;
-(id)readTEKBatchAndReturnError:(id*)arg1 ;
-(id)verifySignatureWithPublicKey:(SecKeyRef)arg1 error:(id*)arg2 ;
-(unsigned long long)invalidKeyCount;
@end

