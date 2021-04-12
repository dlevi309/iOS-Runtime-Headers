/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol CKKSPBCodable;
@class NSURL;

@interface CKKSPBFileStorage : NSObject {

	NSURL* _storageFile;
	Class _storageClass;
	id<CKKSPBCodable> _protobufStorage;

}

@property (retain) NSURL * storageFile;                            //@synthesize storageFile=_storageFile - In the implementation block
@property (retain) Class storageClass;                             //@synthesize storageClass=_storageClass - In the implementation block
@property (retain) id<CKKSPBCodable> protobufStorage;              //@synthesize protobufStorage=_protobufStorage - In the implementation block
-(id)storage;
-(id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2 ;
-(void)setStorage:(id)arg1 ;
-(NSURL *)storageFile;
-(void)setStorageFile:(NSURL *)arg1 ;
-(Class)storageClass;
-(void)setStorageClass:(Class)arg1 ;
-(id<CKKSPBCodable>)protobufStorage;
-(void)setProtobufStorage:(id<CKKSPBCodable>)arg1 ;
@end

