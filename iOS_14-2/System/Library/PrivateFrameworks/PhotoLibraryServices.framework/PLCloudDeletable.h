/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSString;


@protocol PLCloudDeletable <NSObject>
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
@required
+(long long)cloudDeletionTypeForTombstone:(id)arg1;
+(id)cloudUUIDKeyForDeletion;
-(long long)cloudDeletionType;
-(NSString *)cloudUUIDForDeletion;
-(short)cloudDeleteState;
-(void)setCloudDeleteState:(short)arg1;

@end

