/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(long long)dataLength;
-(id)adjustmentDictionary;
-(id)initWithAdjustmentFilePath:(id)arg1 forAsset:(id)arg2 ;
-(long long)estimatedDataLength;
-(NSNumber *)cachedDataLength;
-(void)setCachedDataLength:(NSNumber *)arg1 ;
@end

