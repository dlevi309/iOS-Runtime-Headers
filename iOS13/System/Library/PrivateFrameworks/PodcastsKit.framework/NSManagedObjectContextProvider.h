/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@protocol NSManagedObjectContextProvider <NSObject>
@required
-(id)importContext;
-(id)mainQueueContext;
-(id)privateQueueContext;
-(id)mainOrPrivateContext;
-(id)carPlayContext;
-(id)storeContext;
-(id)resetableImportContext;

@end

