/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSArray, NSURL, NSNumber, NSString;

@interface AAQuotaInfoResponse : AAResponse {

	NSDictionary* _quotaInfo;
	NSDictionary* _endPoints;
	NSDictionary* _storageInfo;
	NSDictionary* _storageMeterLabel;
	NSArray* _usage;

}

@property (nonatomic,readonly) NSArray * usage;                                 //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) NSURL * manageStorageURL; 
@property (nonatomic,readonly) NSNumber * availableStorageInBytes; 
@property (nonatomic,readonly) NSNumber * usedStorageInBytes; 
@property (nonatomic,readonly) NSNumber * totalStorageInBytes; 
@property (nonatomic,readonly) BOOL hasMaxTier; 
@property (nonatomic,readonly) NSString * displayLabel; 
-(NSArray *)usage;
-(BOOL)hasMaxTier;
-(void)_initFromResponseDict;
-(NSNumber *)totalStorageInBytes;
-(NSURL *)manageStorageURL;
-(NSNumber *)usedStorageInBytes;
-(NSNumber *)availableStorageInBytes;
-(void)updateAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)displayLabel;
@end

