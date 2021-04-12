/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {

	NSMutableDictionary* _personIDToEntryMap;
	double _pictureDiameter;

}

@property (nonatomic,readonly) double pictureDiameter; 
+(id)sharedCache;
-(id)init;
-(void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1 ;
-(double)pictureDiameter;
-(id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(/*^block*/id)arg3 ;
-(void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)updateProfilePicture:(id)arg1 didReceiveNewPicture:(BOOL)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4 ;
@end

