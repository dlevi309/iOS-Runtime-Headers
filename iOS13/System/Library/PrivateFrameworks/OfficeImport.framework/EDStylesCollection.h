/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDCollection.h>

@interface EDStylesCollection : EDCollection {

	unsigned long long mDefaultWorkbookStyleIndex;

}
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)defaultWorkbookStyle;
-(void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)defaultWorkbookStyleIndex;
@end

