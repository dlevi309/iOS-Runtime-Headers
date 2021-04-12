/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol OS_dispatch_queue;
#import <CoreML/CoreML-Structs.h>
@class NSMutableDictionary, NSObject;

@interface MLFairPlayDecryptSessionManager : NSObject {

	NSMutableDictionary* _modelPathToSessionID;
	SCD_Struct_ML58* _sessionContext;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (retain,readonly) NSMutableDictionary * modelPathToSessionID;              //@synthesize modelPathToSessionID=_modelPathToSessionID - In the implementation block
@property (readonly) SCD_Struct_ML58* sessionContext;                                //@synthesize sessionContext=_sessionContext - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> syncQueue;                  //@synthesize syncQueue=_syncQueue - In the implementation block
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(BOOL)startDecryptionOfModelAtPath:(id)arg1 usingKeyBlob:(id)arg2 error:(id*)arg3 ;
-(int)stopDecryptionOfModelAtPath:(id)arg1 ;
-(BOOL)stopDecryptionOfModelAtPath:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modelPathToSessionID;
-(SCD_Struct_ML58*)sessionContext;
-(void)dealloc;
@end

