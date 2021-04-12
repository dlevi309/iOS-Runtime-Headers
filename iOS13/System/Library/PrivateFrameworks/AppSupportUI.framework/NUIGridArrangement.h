/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <libobjc.A.dylib/_NUIGridArrangementContainer.h>

@protocol NUIArrangementContainer, NUIGridArrangementDataSource;
@class NSString;

@interface NUIGridArrangement : NSObject <_NUIGridArrangementContainer> {

	NUIGridArrangement* _arrangement;
	id<NUIArrangementContainer> _container;
	id<NUIGridArrangementDataSource> _dataSource;
	double _scale;
	struct {
		unsigned delegateWidth : 1;
		unsigned delegateHeight : 1;
		unsigned containerDirection : 1;
	}  _flags;
	CGRect _bounds;

}

@property (nonatomic,__weak,readonly) id<NUIArrangementContainer> container; 
@property (nonatomic,__weak,readonly) id<NUIGridArrangementDataSource> dataSource; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,nonatomic) long long horizontalDistribution; 
@property (assign,nonatomic) long long verticalDistribution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NUIArrangementContainer>)container;
-(id<NUIGridArrangementDataSource>)dataSource;
-(void)reloadData;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(long long)horizontalDistribution;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(long long)verticalDistribution;
-(void)setVerticalDistribution:(long long)arg1 ;
-(void)_cacheDisplayScaleIfNeeded;
-(id)initWithContainer:(id)arg1 dataSource:(id)arg2 ;
-(CGSize)layoutSizeFittingSize:(CGSize)arg1 ;
-(void)positionItemsInBounds:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(void)positionItemsInColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 block:(/*^block*/id)arg4 ;
-(CGRect)unionFrameForItemsInColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 ;
-(CGRect)frameForColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 ;
@end

