/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSIndexPath, NSString;

@interface _PXSettingsIndexEntry : NSObject {

	_PXSettingsIndexEntry* _parentEntry;
	NSIndexPath* _indexPath;
	NSString* _sectionTitle;
	NSString* _rowTitle;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * sectionTitle;                               //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,readonly) NSString * rowTitle;                                   //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (assign,nonatomic,__weak) _PXSettingsIndexEntry * parentEntry;              //@synthesize parentEntry=_parentEntry - In the implementation block
+(id)_cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
+(id)_titleForRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(NSString *)rowTitle;
-(NSString *)sectionTitle;
-(NSIndexPath *)indexPath;
-(NSString *)subtitle;
-(BOOL)matchesSearchString:(id)arg1 ;
-(id)initWithRowAtIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_revealInSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_revealInTopOfSettingsController:(id)arg1 drillIn:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setParentEntry:(_PXSettingsIndexEntry *)arg1 ;
-(_PXSettingsIndexEntry *)parentEntry;
-(NSString *)title;
@end

