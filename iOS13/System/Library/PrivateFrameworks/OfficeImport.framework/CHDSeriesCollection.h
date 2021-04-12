/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDSortedCollection.h>

@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection {

	CHDChart* mChart;

}
+(id)seriesCollectionWithChart:(id)arg1 ;
-(unsigned long long)addObject:(id)arg1 ;
-(id)initWithChart:(id)arg1 ;
-(unsigned long long)nonEmptySeriesCount;
-(id)firstNonEmptySeries;
@end

