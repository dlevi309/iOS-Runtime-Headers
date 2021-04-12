/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/


@class NSCountedSet, NSArray;

@interface DOCFPItemCollectionManager : NSObject {

	NSCountedSet* _activeCollections;

}

@property (nonatomic,copy,readonly) NSArray * observingCollections; 
+(id)sharedManager;
-(id)init;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForegroundNotification;
-(NSArray *)observingCollections;
-(void)collectionDidStartObserving:(id)arg1 ;
-(void)collectionDidStopObserving:(id)arg1 ;
@end

