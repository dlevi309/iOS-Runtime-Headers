/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface HFStaticItem : HFItem <NSCopying> {

	NSDictionary* _staticResults;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,retain) NSDictionary * staticResults;              //@synthesize staticResults=_staticResults - In the implementation block
@property (nonatomic,copy) id resultsBlock;                             //@synthesize resultsBlock=_resultsBlock - In the implementation block
+(id)emptyItem;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)initWithResultsBlock:(/*^block*/id)arg1 ;
-(id)resultsBlock;
-(void)setResultsBlock:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSDictionary *)staticResults;
-(void)setStaticResults:(NSDictionary *)arg1 ;
@end

