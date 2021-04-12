/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(id)description;
-(id)name;
-(id)object;
-(id)userInfo;
-(id)_init;
-(NSSet *)updatedAssets;
-(id)_initWithChangedObjects:(id)arg1 ;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
@end

