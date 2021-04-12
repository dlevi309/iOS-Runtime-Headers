/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, CPLEngineStore, NSString;

@interface CPLEngineStorage : NSObject <CPLAbstractObject> {

	BOOL _superWasCalled;
	CPLPlatformObject* _platformObject;
	CPLEngineStore* _engineStore;
	NSString* _name;

}

@property (nonatomic,readonly) CPLEngineStore * engineStore;                    //@synthesize engineStore=_engineStore - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long scopeType; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;              //@synthesize platformObject=_platformObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformImplementationProtocol;
-(BOOL)openWithError:(id*)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(CPLPlatformObject *)platformObject;
-(BOOL)isEmpty;
-(id)redactedDescription;
-(id)status;
-(BOOL)closeWithError:(id*)arg1 ;
-(unsigned long long)scopeType;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)statusDictionary;
-(void)transactionDidFinish;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(CPLEngineStore *)engineStore;
-(id)statusPerScopeIndex;
-(BOOL)_checkSuperWasCalled;
@end

