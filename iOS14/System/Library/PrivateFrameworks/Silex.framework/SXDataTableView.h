/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXDataTableDrawView.h>

@protocol SXDataTableViewDataSource, SXDataTableDataSource;
@class SXDataTableBlueprint, NSMutableDictionary;

@interface SXDataTableView : SXDataTableDrawView {

	id<SXDataTableViewDataSource> _viewDataSource;
	id<SXDataTableDataSource> _dataSource;
	SXDataTableBlueprint* _blueprint;
	NSMutableDictionary* _rowViews;
	NSMutableDictionary* _columnViews;

}
-(CGPoint)originOffset;
@end

