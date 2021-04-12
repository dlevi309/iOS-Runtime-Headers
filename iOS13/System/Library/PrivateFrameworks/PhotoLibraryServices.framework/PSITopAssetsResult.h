/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PSITopAssetsResultDelegate>)delegate;
-(void)setDelegate:(id<PSITopAssetsResultDelegate>)arg1 ;
-(const CFArrayRef)assetIds;
-(NSArray *)assetUUIDs;
-(unsigned long long)assetMatchCount;
-(void)fetchAssetUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
@end

