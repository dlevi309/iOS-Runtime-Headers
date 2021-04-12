/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUStorageFactory.h>

@class NUPurgeableStoragePool, NSString;

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory> {

	Class _storageClass;
	NUPurgeableStoragePool* _storagePool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStorageClass:(Class)arg1 ;
-(id)newStorageWithSize:(SCD_Struct_NU7)arg1 format:(id)arg2 ;
-(void)returnStorage:(id)arg1 ;
-(id)initWithStoragePool:(id)arg1 ;
-(id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2 ;
@end

