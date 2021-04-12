/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString, NSNumber, NSDate, PLManagedAsset, NSURL;


@protocol PLSidecar <PLPTPTransferableSidecarFile>
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
@required
-(NSDate *)modificationDate;
-(NSNumber *)index;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1;
-(PLManagedAsset *)asset;
-(NSString *)filename;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;
-(NSString *)uniformTypeIdentifier;
-(NSDate *)captureDate;
-(NSURL *)fileURL;
-(NSString *)originalFilename;
-(NSNumber *)compressedSize;

@end

