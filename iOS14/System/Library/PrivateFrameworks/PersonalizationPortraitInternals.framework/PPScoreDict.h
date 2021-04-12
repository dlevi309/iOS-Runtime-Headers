/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {

	PPBaseScoreInputSet* _scoreInputSet;
	unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > >* _scalarValueStorage;
	unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > >, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > > >* _arrayValueStorage;
	NSMutableArray* _objectStorage;

}

@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(float)scalarValueForIndex:(unsigned long long)arg1 ;
-(NSSet *)featureNames;
-(id)init;
-(void)setArrayValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)arrayValueDictionary;
-(id)scalarValueDictionary;
-(void)setArraySharedPtr:(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setScalarValue:(float)arg1 forIndex:(unsigned long long)arg2 ;
-(id)initWithScoreInputSet:(id)arg1 ;
-(shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >*)arraySharedPtrForIndex:(unsigned long long)arg1 ;
-(id)objectDictionary;
-(id)description;
-(id)arrayValueForIndex:(unsigned long long)arg1 ;
-(unsigned long long)objectCount;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 ;
-(void)setArrayStorage:(vector<float, std::__1::allocator<float> >*)arg1 forIndex:(unsigned long long)arg2 ;
-(id)objectForIndex:(unsigned long long)arg1 ;
-(unsigned long long)scalarValueCount;
-(unsigned long long)arrayValueCount;
-(id)initWithScalarValueCount:(unsigned long long)arg1 arrayValueCount:(unsigned long long)arg2 objectCount:(unsigned long long)arg3 scoreInputSet:(id)arg4 ;
@end

