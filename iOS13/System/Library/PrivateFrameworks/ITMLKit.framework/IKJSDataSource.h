/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSDataObservable.h>
#import <libobjc.A.dylib/IKJSDataSource.h>

@protocol IKJSDataSource <JSExport>
@property (nonatomic,readonly) long long length; 
@property (nonatomic,readonly) long long segmentSize; 
@required
-(long long)length;
-(id)item:(long long)arg1;
-(id)initConstructor:(id)arg1 :(id)arg2 :(long long)arg3;
-(void)update:(id)arg1 :(id)arg2 :(long long)arg3;
-(void)insert:(long long)arg1 :(id)arg2 :(id)arg3;
-(id)delete:(long long)arg1 :(long long)arg2;
-(id)replace:(long long)arg1 :(id)arg2;
-(void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4;
-(long long)segmentSize;

@end

#import <libobjc.A.dylib/_IKJSDataSourceProxy.h>
#import <libobjc.A.dylib/_IKJSDataSource.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface IKJSDataSource : IKJSDataObservable <IKJSDataSource, _IKJSDataSourceProxy, _IKJSDataSource> {

	BOOL _dataSourceViewsDirty;
	long long _segmentSize;
	NSDictionary* _indexTitles;
	NSMutableArray* _dataSourceViewPointers;
	NSMutableDictionary* _loadIndexesRequestsBySegmentIndex;
	NSMutableIndexSet* _loadedSegmentIndexes;

}

@property (nonatomic,readonly) NSMutableArray * dataSourceViewPointers;                              //@synthesize dataSourceViewPointers=_dataSourceViewPointers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * loadIndexesRequestsBySegmentIndex;              //@synthesize loadIndexesRequestsBySegmentIndex=_loadIndexesRequestsBySegmentIndex - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * loadedSegmentIndexes;                             //@synthesize loadedSegmentIndexes=_loadedSegmentIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexTitles;                                      //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,readonly) long long length; 
@property (nonatomic,readonly) long long segmentSize;                                                //@synthesize segmentSize=_segmentSize - In the implementation block
+(id)jsExportedProperties;
+(id)_titlesByIndexFromValue:(id)arg1 ;
-(long long)length;
-(id)initWithItems:(id)arg1 ;
-(id)item:(long long)arg1 ;
-(NSDictionary *)indexTitles;
-(id)extraInfoForChangeInPathWithAccessorSequence:(id)arg1 extraInfo:(id)arg2 ;
-(id)initConstructor:(id)arg1 :(id)arg2 :(long long)arg3 ;
-(void)update:(id)arg1 :(id)arg2 :(long long)arg3 ;
-(void)insert:(long long)arg1 :(id)arg2 :(id)arg3 ;
-(id)delete:(long long)arg1 :(long long)arg2 ;
-(id)replace:(long long)arg1 :(id)arg2 ;
-(void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(id)arg4 ;
-(long long)segmentSize;
-(id)boxedItem:(long long)arg1 ;
-(id)initWithItems:(id)arg1 indexTitles:(id)arg2 ;
-(id)initWithItems:(id)arg1 indexTitles:(id)arg2 segmentSize:(long long)arg3 ;
-(void)_resetLoadedSegments;
-(void)_resetUsedIndexesAndMigrateItems:(id)arg1 ;
-(id)_spliceAtIndex:(long long)arg1 deleteCount:(long long)arg2 insertions:(id)arg3 ;
-(void)_updateTitlesFromIndex:(long long)arg1 deleteCount:(long long)arg2 insertionCount:(long long)arg3 title:(id)arg4 ;
-(long long)_segmentIndexForItemIndex:(long long)arg1 ;
-(void)_didAdjustSegmentIndexesFromIndex:(long long)arg1 ;
-(NSMutableArray *)dataSourceViewPointers;
-(void)markDataSourceViewsUpdated;
-(void)_loadUsedIndexes;
-(NSMutableDictionary *)loadIndexesRequestsBySegmentIndex;
-(NSMutableIndexSet *)loadedSegmentIndexes;
-(id)_dataSourceViews;
-(id)asPrivateIKJSDataSource;
-(id)valuesForSubscripts:(NSRange)arg1 boxed:(BOOL)arg2 ;
-(void)addDataSourceView:(id)arg1 ;
-(void)removeDataSourceView:(id)arg1 ;
@end

