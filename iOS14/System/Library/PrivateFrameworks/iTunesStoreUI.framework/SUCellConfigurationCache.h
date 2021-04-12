/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {

	id _cellContext;
	NSMutableArray* _configurations;

}

@property (nonatomic,retain) id cellContext;              //@synthesize cellContext=_cellContext - In the implementation block
-(void)reset;
-(void)dealloc;
-(void)resetLayoutCaches;
-(id)configurationForRow:(unsigned long long)arg1 ;
-(id)cellContext;
-(void)setCellContext:(id)arg1 ;
-(id)initWithClass:(Class)arg1 tableHeight:(double)arg2 ;
@end

