/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIEntityProviding;
#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIDynamicPageSectionIndexMapper : NSObject {

	NSRange* _sectionIndexToEntityRange;
	long long _numberOfSections;
	struct {
		unsigned respondsToNumberOfSections : 1;
	}  _entityProviderFlags;
	id<SKUIEntityProviding> _entityProvider;

}

@property (nonatomic,retain) id<SKUIEntityProviding> entityProvider;              //@synthesize entityProvider=_entityProvider - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) long long totalNumberOfEntities; 
-(long long)numberOfSections;
-(void)reloadData;
-(void)dealloc;
-(long long)totalNumberOfEntities;
-(id<SKUIEntityProviding>)entityProvider;
-(void)setEntityProvider:(id<SKUIEntityProviding>)arg1 ;
-(id)entityIndexPathForGlobalIndex:(long long)arg1 ;
-(void)_loadDataIfNeeded;
-(BOOL)getItem:(unsigned long long*)arg1 section:(unsigned long long*)arg2 forGlobalIndex:(long long)arg3 ;
-(long long)globalIndexForEntityIndexPath:(id)arg1 ;
-(NSRange)rangeForSectionAtIndex:(long long)arg1 ;
@end

