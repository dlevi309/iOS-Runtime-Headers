/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSMutableSet, NSDictionary, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {

	CoreDAVLeafItem* _maxResourcesItem;
	CoreDAVLeafItem* _maxSizeItem;
	NSMutableSet* _supportedItems;

}

@property (nonatomic,readonly) NSDictionary * dictRepresentation; 
@property (nonatomic,retain) CoreDAVLeafItem * maxResourcesItem;               //@synthesize maxResourcesItem=_maxResourcesItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * maxSizeItem;                    //@synthesize maxSizeItem=_maxSizeItem - In the implementation block
@property (nonatomic,readonly) NSSet * supportedItems;                         //@synthesize supportedItems=_supportedItems - In the implementation block
@property (nonatomic,readonly) long long maxResources; 
@property (nonatomic,readonly) long long maxSize; 
@property (nonatomic,readonly) BOOL supportsInsert; 
@property (nonatomic,readonly) BOOL supportsUpdate; 
@property (nonatomic,readonly) BOOL supportsDelete; 
+(id)copyParseRules;
-(id)init;
-(BOOL)supportsDelete;
-(NSDictionary *)dictRepresentation;
-(id)description;
-(long long)maxSize;
-(long long)maxResources;
-(void)setMaxResourcesItem:(CoreDAVLeafItem *)arg1 ;
-(void)setMaxSizeItem:(CoreDAVLeafItem *)arg1 ;
-(void)addSupportedItem:(id)arg1 ;
-(BOOL)supportsInsert;
-(BOOL)supportsUpdate;
-(BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2 ;
-(CoreDAVLeafItem *)maxResourcesItem;
-(CoreDAVLeafItem *)maxSizeItem;
-(NSSet *)supportedItems;
@end

