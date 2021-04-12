/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIOrderedItemsMapDelegate;
@class NSOrderedSet, NSDictionary;

@interface VUIOrderedItemsMap : NSObject {

	long long _dataSourceType;
	id<VUIOrderedItemsMapDelegate> _delegate;
	NSOrderedSet* _orderedKeys;
	NSDictionary* _mappingDictionary;

}

@property (assign,nonatomic) long long dataSourceType;                                    //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (nonatomic,copy) NSDictionary * mappingDictionary;                              //@synthesize mappingDictionary=_mappingDictionary - In the implementation block
@property (nonatomic,copy) NSOrderedSet * orderedKeys;                                    //@synthesize orderedKeys=_orderedKeys - In the implementation block
@property (assign,nonatomic,__weak) id<VUIOrderedItemsMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VUIOrderedItemsMapDelegate>)delegate;
-(void)setDelegate:(id<VUIOrderedItemsMapDelegate>)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeAll;
-(void)setOrderedKeys:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)orderedKeys;
-(long long)dataSourceType;
-(void)setDataSourceType:(long long)arg1 ;
-(void)processEntities:(id)arg1 forDataSourceType:(long long)arg2 ;
-(void)updateEntities:(id)arg1 ;
-(id)_identifierForMediaItem:(id)arg1 withProperty:(id)arg2 ;
-(void)setMappingDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)mappingDictionary;
-(void)_generateStoreIdentiferToIndexMapping:(id)arg1 generatesDifferentials:(BOOL)arg2 ;
@end

