/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDCollection.h>

@interface EDStylesCollection : EDCollection {

	unsigned long long mDefaultWorkbookStyleIndex;

}
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(id)defaultWorkbookStyle;
-(void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1 ;
-(unsigned long long)defaultWorkbookStyleIndex;
@end

