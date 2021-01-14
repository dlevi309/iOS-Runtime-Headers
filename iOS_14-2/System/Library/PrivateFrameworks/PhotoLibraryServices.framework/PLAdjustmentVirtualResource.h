/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLVirtualResource.h>

@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource {

	os_unfair_lock_s _lock;
	NSNumber* _cachedDataLength;

}

@property (assign,nonatomic) os_unfair_lock_s lock;                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSNumber * cachedDataLength;              //@synthesize cachedDataLength=_cachedDataLength - In the implementation block
-(long long)dataLength;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)adjustmentDictionary;
-(id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2 ;
-(NSNumber *)cachedDataLength;
-(void)setCachedDataLength:(NSNumber *)arg1 ;
-(long long)estimatedDataLength;
@end

