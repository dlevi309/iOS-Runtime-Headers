/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncBaseItem.h>

@class _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncCachedUserReview : MapsSync.MapsSyncBaseItem {

	 _muid;
	 _numberPhotosUploaded;
	 _rating;

}

@property (readonly,nonatomic) unsigned long long muid; 
@property (readonly,nonatomic) int numberPhotosUploaded; 
@property (readonly,nonatomic) short rating; 
@property (readonly,nonatomic) _TtC8MapsSync19MapsSyncDataSession * session; 
-(short)rating;
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(_TtC8MapsSync19MapsSyncDataSession *)session;
-(Class)mutableObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(int)numberPhotosUploaded;
-(unsigned long long)muid;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

