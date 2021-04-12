/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)index;
-(NSString *)filename;
-(NSDate *)modificationDate;
-(NSURL *)fileURL;
-(PLManagedAsset *)asset;
-(NSNumber *)compressedSize;
-(NSDate *)captureDate;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(long long)ptpTrashedState;
-(void)setPtpTrashedState:(long long)arg1;
-(short)indexValue;
-(unsigned long long)compressedSizeValue;

@end

