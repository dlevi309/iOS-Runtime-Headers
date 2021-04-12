/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(short)cloudDeleteState;
-(void)setCloudDeleteState:(short)arg1;
-(NSString *)cloudUUIDForDeletion;

@end

