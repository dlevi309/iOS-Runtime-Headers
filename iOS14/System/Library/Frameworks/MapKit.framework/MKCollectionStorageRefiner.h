/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class GEOURLCollectionStorage;

@interface MKCollectionStorageRefiner : NSObject {

	os_unfair_lock_s _lock;
	GEOURLCollectionStorage* _collectionStorage;

}
-(void)_sharedInitWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 traits:(id)arg2 ;
-(id)initWithCollectionURL:(id)arg1 ;
-(id)initWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 ;
@end

