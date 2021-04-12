/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXHorizontalStackLayoutCalculator.h>

@protocol SXHorizontalStackLayoutCalculator <NSObject>
@required
-(id)layoutForComponentWidth:(double)arg1;

@end


@class NSMutableArray, NSMutableDictionary, NSString;

@interface SXHorizontalStackLayoutCalculator : NSObject <SXHorizontalStackLayoutCalculator> {

	NSMutableArray* _items;
	NSMutableArray* _flexibleItems;
	NSMutableArray* _sortedItems;
	NSMutableDictionary* _componentsGroupedByMaximumWidth;
	NSMutableDictionary* _componentsGroupedByMinimumWidth;
	NSMutableDictionary* _minimumWidths;
	NSMutableDictionary* _maximumWidths;
	double _combinedMaximumWidth;
	double _combinedMinimumWidth;

}

@property (nonatomic,readonly) NSMutableArray * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSMutableArray * flexibleItems;                                     //@synthesize flexibleItems=_flexibleItems - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedItems;                                       //@synthesize sortedItems=_sortedItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentsGroupedByMaximumWidth;              //@synthesize componentsGroupedByMaximumWidth=_componentsGroupedByMaximumWidth - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * componentsGroupedByMinimumWidth;              //@synthesize componentsGroupedByMinimumWidth=_componentsGroupedByMinimumWidth - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * minimumWidths;                                //@synthesize minimumWidths=_minimumWidths - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * maximumWidths;                                //@synthesize maximumWidths=_maximumWidths - In the implementation block
@property (assign,nonatomic) double combinedMaximumWidth;                                          //@synthesize combinedMaximumWidth=_combinedMaximumWidth - In the implementation block
@property (assign,nonatomic) double combinedMinimumWidth;                                          //@synthesize combinedMinimumWidth=_combinedMinimumWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)items;
-(NSMutableArray *)sortedItems;
-(NSMutableArray *)flexibleItems;
-(double)combinedMaximumWidth;
-(void)setCombinedMaximumWidth:(double)arg1 ;
-(double)combinedMinimumWidth;
-(void)setCombinedMinimumWidth:(double)arg1 ;
-(NSMutableDictionary *)componentsGroupedByMinimumWidth;
-(NSMutableDictionary *)componentsGroupedByMaximumWidth;
-(NSMutableDictionary *)minimumWidths;
-(NSMutableDictionary *)maximumWidths;
-(id)layoutForComponentWidth:(double)arg1 ;
-(void)addFlexibleItemWithIdentifier:(id)arg1 ;
-(void)addItemWithMinimumWidth:(double)arg1 maximumWidth:(double)arg2 identifier:(id)arg3 ;
@end

