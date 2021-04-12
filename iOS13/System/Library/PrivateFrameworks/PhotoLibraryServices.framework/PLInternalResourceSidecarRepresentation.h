/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLSidecar.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL, PLInternalResource, NSManagedObjectID;

@interface PLInternalResourceSidecarRepresentation : NSObject <PLSidecar> {

	PLInternalResource* _resource;

}

@property (assign,nonatomic,__weak) PLInternalResource * resource;                  //@synthesize resource=_resource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain,readonly) NSString * filename; 
@property (nonatomic,retain,readonly) NSDate * captureDate; 
@property (nonatomic,retain,readonly) NSDate * modificationDate; 
@property (nonatomic,retain,readonly) NSURL * fileURL; 
@property (nonatomic,retain,readonly) NSNumber * compressedSize; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSNumber * index; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) PLManagedAsset * asset; 
@property (nonatomic,readonly) short indexValue; 
@property (nonatomic,readonly) unsigned long long compressedSizeValue; 
-(NSString *)description;
-(NSNumber *)index;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(NSManagedObjectID *)objectID;
-(PLManagedAsset *)asset;
-(id)extension;
-(NSNumber *)compressedSize;
-(unsigned)resourceType;
-(id)initWithResource:(id)arg1 ;
-(PLInternalResource *)resource;
-(NSDate *)captureDate;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1 ;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;
-(void)setResource:(PLInternalResource *)arg1 ;
@end

