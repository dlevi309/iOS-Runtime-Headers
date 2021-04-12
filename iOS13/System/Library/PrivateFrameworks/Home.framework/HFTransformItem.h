/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFItem;

@interface HFTransformItem : HFItem <NSCopying> {

	HFItem* _sourceItem;
	/*^block*/id _optionsTransformBlock;
	/*^block*/id _resultsTransformBlock;

}

@property (nonatomic,retain) HFItem * sourceItem;                 //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,copy) id optionsTransformBlock;              //@synthesize optionsTransformBlock=_optionsTransformBlock - In the implementation block
@property (nonatomic,copy) id resultsTransformBlock;              //@synthesize resultsTransformBlock=_resultsTransformBlock - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(/*^block*/id)arg2 resultsTransformBlock:(/*^block*/id)arg3 ;
-(HFItem *)sourceItem;
-(id)initWithSourceItem:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(id)optionsTransformBlock;
-(id)resultsTransformBlock;
-(id)initWithSourceItem:(id)arg1 resultKeyFilter:(id)arg2 ;
-(id)initWithSourceItem:(id)arg1 resultKeyExclusionFilter:(id)arg2 ;
-(void)setOptionsTransformBlock:(id)arg1 ;
-(void)setResultsTransformBlock:(id)arg1 ;
@end

