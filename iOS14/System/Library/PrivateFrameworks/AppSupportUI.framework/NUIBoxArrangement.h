/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <libobjc.A.dylib/_NUIBoxArrangementContainer.h>

@protocol NUIArrangementContainer, NUIBoxArrangementDataSource;
@class NSString;

@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer> {

	NUIBoxArrangement* _arrangement;
	id<NUIArrangementContainer> _container;
	id<NUIBoxArrangementDataSource> _dataSource;
	struct {
		unsigned containerDirection : 1;
	}  _flags;
	double _scale;
	CGRect _bounds;

}

@property (nonatomic,__weak,readonly) id<NUIArrangementContainer> container; 
@property (nonatomic,__weak,readonly) id<NUIBoxArrangementDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(CGRect)arg2 ;
-(void)populateBoxArrangementCells:(vector<_NUIBoxArrangementCell, std::__1::allocator<_NUIBoxArrangementCell> >*)arg1 ;
-(CGSize)contentLayoutSizeFittingSize:(CGSize)arg1 forArrangedSubview:(id)arg2 ;
-(id<NUIBoxArrangementDataSource>)dataSource;
-(id)initWithContainer:(id)arg1 dataSource:(id)arg2 ;
-(void)reloadData;
-(void)positionItemsInBounds:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(id<NUIArrangementContainer>)container;
-(CGSize)layoutSizeFittingSize:(CGSize)arg1 ;
-(void)dealloc;
@end

