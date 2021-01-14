/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)caches;
-(void)reset;
-(void)dealloc;
-(void)resetLayoutCaches;
-(id)cacheForClass:(Class)arg1 ;
-(id)cellContext;
-(id)initWithTableHeight:(double)arg1 ;
-(void)setCellContext:(id)arg1 ;
@end

