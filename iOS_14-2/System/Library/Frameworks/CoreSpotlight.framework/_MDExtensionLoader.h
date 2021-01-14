/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableArray;

@interface _MDExtensionLoader : NSObject {

	BOOL _extensionsCacheNeedsLoad;
	id _matchingContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _extensionsByBundleId;
	NSDictionary* _fileProviderBundleMap;
	NSMutableArray* _containerPaths;
	NSMutableArray* _queueLabels;
	NSMutableArray* _containerIDs;
	NSMutableArray* _extensionIdentifiers;
	long long _notificationCount;

}

@property (nonatomic,retain) id matchingContext;                                 //@synthesize matchingContext=_matchingContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionsByBundleId;                //@synthesize extensionsByBundleId=_extensionsByBundleId - In the implementation block
@property (nonatomic,retain) NSDictionary * fileProviderBundleMap;               //@synthesize fileProviderBundleMap=_fileProviderBundleMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerPaths;                    //@synthesize containerPaths=_containerPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * queueLabels;                       //@synthesize queueLabels=_queueLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerIDs;                      //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * extensionIdentifiers;              //@synthesize extensionIdentifiers=_extensionIdentifiers - In the implementation block
@property (assign) BOOL extensionsCacheNeedsLoad;                                //@synthesize extensionsCacheNeedsLoad=_extensionsCacheNeedsLoad - In the implementation block
@property (assign,nonatomic) long long notificationCount;                        //@synthesize notificationCount=_notificationCount - In the implementation block
-(long long)notificationCount;
-(void)setContainerIDs:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)containerPaths;
-(NSDictionary *)extensionsByBundleId;
-(void)stopLookingForExtensions;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(/*^block*/id)arg1 ;
-(void)setExtensionsByBundleId:(NSDictionary *)arg1 ;
-(NSDictionary *)fileProviderBundleMap;
-(void)setFileProviderBundleMap:(NSDictionary *)arg1 ;
-(void)setContainerPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queueLabels;
-(void)setQueueLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)extensionIdentifiers;
-(void)setExtensionIdentifiers:(NSMutableArray *)arg1 ;
-(void)setNotificationCount:(long long)arg1 ;
-(BOOL)extensionsCacheNeedsLoad;
-(void)setExtensionsCacheNeedsLoad:(BOOL)arg1 ;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)containerIDs;
@end

