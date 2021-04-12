/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/CKXPCClient.h>
#import <libobjc.A.dylib/CKXPCDiscretionaryClient.h>

@class CKContainer, NSString;

@interface CKContainerXPCProxy : NSObject <CKXPCClient, CKXPCDiscretionaryClient> {

	CKContainer* _container;

}

@property (assign,nonatomic,__weak) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(void)discretionarySuspensionForOperationID:(id)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
@end

