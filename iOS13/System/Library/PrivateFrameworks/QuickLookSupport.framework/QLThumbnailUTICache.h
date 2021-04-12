/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface QLThumbnailUTICache : NSObject {

	NSMutableDictionary* _itemTypeCache;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (retain) NSMutableDictionary * itemTypeCache;              //@synthesize itemTypeCache=_itemTypeCache - In the implementation block
+(id)sharedCache;
+(id)_iWorkUTIs;
-(id)init;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2 ;
-(BOOL)_contentTypeIsIWorkType:(id)arg1 ;
-(unsigned long long)itemTypeForContentType:(id)arg1 ;
-(NSMutableDictionary *)itemTypeCache;
-(unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1 ;
-(BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2 ;
-(void)setItemTypeCache:(NSMutableDictionary *)arg1 ;
@end

