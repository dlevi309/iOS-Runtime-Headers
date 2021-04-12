/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HFItemProvider, NSMutableDictionary;

@interface HFTransformItemProvider : HFItemProvider {

	HFItemProvider* _sourceProvider;
	/*^block*/id _transformationBlock;
	NSMutableDictionary* _transformedItems;

}

@property (nonatomic,retain) HFItemProvider * sourceProvider;                     //@synthesize sourceProvider=_sourceProvider - In the implementation block
@property (nonatomic,copy) id transformationBlock;                                //@synthesize transformationBlock=_transformationBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transformedItems;              //@synthesize transformedItems=_transformedItems - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)reloadItems;
-(id)transformationBlock;
-(void)setTransformationBlock:(id)arg1 ;
-(id)invalidationReasons;
-(id)initWithSourceProvider:(id)arg1 transformationBlock:(/*^block*/id)arg2 ;
-(HFItemProvider *)sourceProvider;
-(NSMutableDictionary *)transformedItems;
-(void)setSourceProvider:(HFItemProvider *)arg1 ;
-(void)setTransformedItems:(NSMutableDictionary *)arg1 ;
@end

