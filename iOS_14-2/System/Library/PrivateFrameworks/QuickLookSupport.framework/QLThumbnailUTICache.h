/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface QLThumbnailUTICache : NSObject {

	NSMutableDictionary* _itemTypeCache;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (retain) NSMutableDictionary * itemTypeCache;              //@synthesize itemTypeCache=_itemTypeCache - In the implementation block
+(id)_iWorkUTIs;
+(id)sharedCache;
-(id)init;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2 ;
-(BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2 ;
-(BOOL)_contentTypeIsIWorkType:(id)arg1 ;
-(BOOL)_contentTypeShouldBeHandledByAppleExtension:(id)arg1 ;
-(unsigned long long)itemTypeForContentType:(id)arg1 ;
-(NSMutableDictionary *)itemTypeCache;
-(unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1 ;
-(void)setItemTypeCache:(NSMutableDictionary *)arg1 ;
@end

