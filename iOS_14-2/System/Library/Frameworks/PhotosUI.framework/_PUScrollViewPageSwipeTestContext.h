/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSString;

@interface _PUScrollViewPageSwipeTestContext : NSObject {

	NSString* _testName;
	long long _numberOfPages;
	long long _numberOfIterations;
	unsigned long long _scrollAxis;
	long long _currentIteration;
	long long _currentPage;
	long long _currentDirection;
	double _currentPageSwipeProgress;
	long long _currentState;
	CGPoint _originContentOffset;

}

@property (nonatomic,copy) NSString * testName;                            //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) long long numberOfPages;                      //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) long long numberOfIterations;                 //@synthesize numberOfIterations=_numberOfIterations - In the implementation block
@property (assign,nonatomic) unsigned long long scrollAxis;                //@synthesize scrollAxis=_scrollAxis - In the implementation block
@property (assign,nonatomic) CGPoint originContentOffset;                  //@synthesize originContentOffset=_originContentOffset - In the implementation block
@property (assign,nonatomic) long long currentIteration;                   //@synthesize currentIteration=_currentIteration - In the implementation block
@property (assign,nonatomic) long long currentPage;                        //@synthesize currentPage=_currentPage - In the implementation block
@property (assign,nonatomic) long long currentDirection;                   //@synthesize currentDirection=_currentDirection - In the implementation block
@property (assign,nonatomic) double currentPageSwipeProgress;              //@synthesize currentPageSwipeProgress=_currentPageSwipeProgress - In the implementation block
@property (assign,nonatomic) long long currentState;                       //@synthesize currentState=_currentState - In the implementation block
-(void)setCurrentState:(long long)arg1 ;
-(CGPoint)originContentOffset;
-(id)init;
-(void)setScrollAxis:(unsigned long long)arg1 ;
-(void)setOriginContentOffset:(CGPoint)arg1 ;
-(long long)currentIteration;
-(void)setCurrentIteration:(long long)arg1 ;
-(double)currentPageSwipeProgress;
-(void)setCurrentPageSwipeProgress:(double)arg1 ;
-(long long)currentState;
-(unsigned long long)scrollAxis;
-(long long)currentPage;
-(long long)numberOfIterations;
-(void)setNumberOfIterations:(long long)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)numberOfPages;
-(NSString *)testName;
-(void)setNumberOfPages:(long long)arg1 ;
-(void)setCurrentDirection:(long long)arg1 ;
-(long long)currentDirection;
@end

