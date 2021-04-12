/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSNumber, NSString, NSURL;

@interface AAUIQuotaResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSArray* _usage;
	NSDictionary* _endPoints;
	NSDictionary* _storageInfo;
	NSDictionary* _storageMeterLabel;

}

@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInBytes; 
@property (nonatomic,readonly) NSArray * usage; 
@property (nonatomic,readonly) NSArray * iCloudMediaUsage; 
@property (nonatomic,readonly) BOOL hasMaxTier; 
@property (nonatomic,readonly) NSString * displayLabel; 
@property (nonatomic,readonly) NSURL * manageStorageURL; 
-(NSArray *)usage;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)displayLabel;
-(NSArray *)iCloudMediaUsage;
-(NSNumber *)totalStorageInBytes;
-(NSNumber *)usedStorageInBytes;
-(NSNumber *)availableStorageInBytes;
-(BOOL)hasMaxTier;
-(NSURL *)manageStorageURL;
@end

