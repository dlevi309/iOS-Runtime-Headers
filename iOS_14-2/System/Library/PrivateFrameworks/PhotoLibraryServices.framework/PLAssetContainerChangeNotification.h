/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, PLManagedObject;

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification {

	BOOL _titleDidChange;
	BOOL _keyAssetDidChange;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) PLManagedObject * container; 
@property (nonatomic,readonly) id<PLAssetContainer> assetContainer; 
@property (nonatomic,readonly) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,readonly) BOOL titleDidChange; 
@property (nonatomic,readonly) BOOL keyAssetDidChange; 
+(id)notificationWithContainer:(id)arg1 snapshot:(id)arg2 changedAssets:(id)arg3 ;
-(id)userInfo;
-(id)name;
-(id)description;
-(BOOL)hasDeletes;
-(NSObject*<PLAlbumProtocol>)album;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(id<PLAssetContainer>)assetContainer;
-(id)_contentRelationshipName;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(void)_calculateDiffs;
-(PLManagedObject *)container;
-(void)dealloc;
@end

