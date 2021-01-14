/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/EDReference.h>

@interface EDSheetReference : EDReference {

	unsigned long long mSheetIndex;

}
+(id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)sheetIndex;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(void)unionWithReference:(id)arg1 ;
-(id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5 ;
-(BOOL)isEqualToTableReference:(id)arg1 ;
-(BOOL)isSheedIndexValid;
@end

