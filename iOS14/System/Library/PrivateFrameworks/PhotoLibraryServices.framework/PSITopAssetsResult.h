/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PSITopAssetsResultDelegate, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSArray;

@interface PSITopAssetsResult : NSObject {

	id<PSITopAssetsResultDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSArray* _assetUUIDs;
	const CFArrayRef _assetIds;

}

@property (nonatomic,retain) const CFArrayRef assetIds;                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic,__weak) id<PSITopAssetsResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long assetMatchCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(id)init;
-(id<PSITopAssetsResultDelegate>)delegate;
-(void)setDelegate:(id<PSITopAssetsResultDelegate>)arg1 ;
-(NSArray *)assetUUIDs;
-(const CFArrayRef)assetIds;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
-(unsigned long long)assetMatchCount;
-(void)fetchAssetUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

