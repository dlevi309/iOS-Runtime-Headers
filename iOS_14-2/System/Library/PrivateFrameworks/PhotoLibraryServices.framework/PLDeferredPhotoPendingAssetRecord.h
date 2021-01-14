/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class PLManagedAsset, NSString;

@interface PLDeferredPhotoPendingAssetRecord : NSObject {

	BOOL _isBackgroundPriority;
	PLManagedAsset* _asset;
	NSString* _requestReason;

}

@property (retain) PLManagedAsset * asset;                 //@synthesize asset=_asset - In the implementation block
@property (retain) NSString * requestReason;               //@synthesize requestReason=_requestReason - In the implementation block
@property (assign) BOOL isBackgroundPriority;              //@synthesize isBackgroundPriority=_isBackgroundPriority - In the implementation block
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(void)setRequestReason:(NSString *)arg1 ;
-(BOOL)isBackgroundPriority;
-(void)setIsBackgroundPriority:(BOOL)arg1 ;
-(PLManagedAsset *)asset;
-(NSString *)requestReason;
@end

