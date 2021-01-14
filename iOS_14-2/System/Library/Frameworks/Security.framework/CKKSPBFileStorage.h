/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStorage:(id)arg1 ;
-(Class)storageClass;
-(id)storage;
-(id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2 ;
-(id<CKKSPBCodable>)protobufStorage;
-(void)setStorageFile:(NSURL *)arg1 ;
-(NSURL *)storageFile;
-(void)setStorageClass:(Class)arg1 ;
-(void)setProtobufStorage:(id<CKKSPBCodable>)arg1 ;
@end

