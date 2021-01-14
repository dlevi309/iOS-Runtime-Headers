/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLSidecar.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL, PLInternalResource, NSManagedObjectID;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {

	PLInternalResource* _resource;

}

@property (assign,nonatomic,__weak) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)modificationDate;
-(NSNumber *)index;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1 ;
-(void)setResource:(PLInternalResource *)arg1 ;
-(unsigned)resourceType;
-(PLManagedAsset *)asset;
-(NSString *)filename;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;
-(NSString *)uniformTypeIdentifier;
-(NSManagedObjectID *)objectID;
-(NSDate *)captureDate;
-(NSURL *)fileURL;
-(NSString *)description;
-(PLInternalResource *)resource;
-(id)extension;
-(NSString *)originalFilename;
-(id)initWithResource:(id)arg1 ;
-(NSNumber *)compressedSize;
@end

