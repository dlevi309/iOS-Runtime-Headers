/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

