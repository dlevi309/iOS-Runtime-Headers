/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(id)userInfo;
-(id)object;
-(id)name;
-(NSSet *)updatedAssets;
-(id)description;
-(id)_initWithChangedObjects:(id)arg1 ;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
-(id)_init;
@end

