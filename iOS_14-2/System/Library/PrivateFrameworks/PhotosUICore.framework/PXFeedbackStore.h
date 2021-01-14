/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary, NSDictionary;

@interface PXFeedbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSDictionary * store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(NSDictionary *)store;
-(BOOL)_saveStore;
-(unsigned long long)sentFeedbackCount;
-(void)_cleanupStore;
-(id)longDescription;
-(unsigned long long)unsentFeedbackCount;
-(BOOL)_loadStore;
-(void)addFeedbackEntry:(id)arg1 ;
-(void)removeFeedbackEntry:(id)arg1 ;
-(id)_storePath;
@end

