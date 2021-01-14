/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

