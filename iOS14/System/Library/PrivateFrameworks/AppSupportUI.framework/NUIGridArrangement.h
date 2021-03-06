/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setVerticalDistribution:(long long)arg1 ;
-(void)positionItemsInColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 block:(/*^block*/id)arg4 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(CGRect)frameForColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 ;
-(void)setHorizontalDistribution:(long long)arg1 ;
-(id<NUIGridArrangementDataSource>)dataSource;
-(id)initWithContainer:(id)arg1 dataSource:(id)arg2 ;
-(void)populateGridArrangementDimension:(vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension> >*)arg1 withCells:(const vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg2 axis:(long long)arg3 ;
-(long long)horizontalDistribution;
-(long long)verticalDistribution;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)populateGridArrangementCells:(vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell> >*)arg1 ;
-(void)reloadData;
-(void)positionItemsInBounds:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(CGRect)unionFrameForItemsInColumns:(NSRange)arg1 rows:(NSRange)arg2 inBounds:(CGRect)arg3 ;
-(id<NUIArrangementContainer>)container;
-(CGSize)layoutSizeFittingSize:(CGSize)arg1 ;
-(void)dealloc;
@end

