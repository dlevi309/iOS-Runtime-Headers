/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSCountedSet, NSArray;

@interface DOCFPItemCollectionManager : NSObject {

	NSCountedSet* _activeCollections;

}

@property (nonatomic,copy,readonly) NSArray * observingCollections; 
+(id)sharedManager;
-(void)applicationDidEnterBackground;
-(id)init;
-(void)applicationWillEnterForegroundNotification;
-(NSArray *)observingCollections;
-(void)collectionDidStartObserving:(id)arg1 ;
-(void)collectionDidStopObserving:(id)arg1 ;
@end

