/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVAssetDownloadStorageManagementPolicyInternal, NSString, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {

	AVAssetDownloadStorageManagementPolicyInternal* _storageManagementPolicy;

}

@property (nonatomic,copy,readonly) NSString * priority; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(id)_policyDictionary;
-(void)_setPolicyDictionary:(id)arg1 ;
@end

