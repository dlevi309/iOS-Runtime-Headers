/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSTTableHeaderStorage.h>

@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {

	map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;
	double mHorizontalScaleFactor;

}

@property (assign,nonatomic) double horizontalScaleFactor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)count;
-(id)initWithContext:(id)arg1 ;
-(double)horizontalScaleFactor;
-(void)removeHeaderForKey:(unsigned)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned)arg2 ;
-(void)setHorizontalScaleFactor:(double)arg1 ;
-(id)packageLocator;
-(unsigned long long)flushableSize;
-(unsigned)maxKey;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3 ;
-(void)shiftKeysAtIndex:(unsigned)arg1 amount:(int)arg2 ;
-(void)applyFunction:(/*function pointer*/void*)arg1 withState:(void*)arg2 willModify:(BOOL)arg3 ;
-(id)headerForKey:(unsigned)arg1 willModify:(BOOL)arg2 ;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2 ;
-(unsigned)minKey;
-(unsigned)upperBound:(unsigned)arg1 ;
-(unsigned)lowerBound:(unsigned)arg1 ;
@end

