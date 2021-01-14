/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAssetDownloadStorageManagementPolicyInternal, NSString, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {

	AVAssetDownloadStorageManagementPolicyInternal* _storageManagementPolicy;

}

@property (nonatomic,copy,readonly) NSString * priority; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(id)_policyDictionary;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(NSString *)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_setPolicyDictionary:(id)arg1 ;
@end

