/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection {

	EDResources* mResources;
	EDWorksheet* mWorksheet;

}
-(id)columnInfoForColumnNumber:(int)arg1 ;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(id)columnInfoCreateIfNilForColumnNumber:(int)arg1 ;
@end

