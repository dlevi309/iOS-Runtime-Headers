/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSMutableDictionary, NSArray;

@interface SUVariableCellConfigurationCache : NSObject {

	NSMutableDictionary* _caches;
	id _cellContext;
	double _tableHeight;

}

@property (nonatomic,readonly) NSArray * caches; 
@property (nonatomic,retain) id cellContext;                  //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)cacheForClass:(Class)arg1 ;
-(id)cellContext;
-(id)initWithTableHeight:(double)arg1 ;
-(void)setCellContext:(id)arg1 ;
-(NSArray *)caches;
@end

