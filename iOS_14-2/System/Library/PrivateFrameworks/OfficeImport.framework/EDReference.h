/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDReference : NSObject <NSCopying> {

	EDAreaReference mAreaReference;

}
+(id)reference;
+(id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
+(id)referenceWithAreaReference:(EDAreaReference*)arg1 ;
+(id)referenceWithReference:(id)arg1 ;
-(id)initWithReference:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(int)lastRow;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)firstColumn;
-(int)lastColumn;
-(int)firstRow;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)setFirstRow:(int)arg1 ;
-(void)setLastRow:(int)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(EDAreaReference)areaReference;
-(id)initWithAreaReference:(EDAreaReference*)arg1 ;
-(BOOL)isEqualToReference:(id)arg1 ;
-(BOOL)isValidCellReference;
-(BOOL)isValidAreaReference;
-(BOOL)containsRow:(int)arg1 column:(int)arg2 ;
-(BOOL)isCellReference;
-(BOOL)isRowReference;
-(BOOL)isColumnReference;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(void)unionWithReference:(id)arg1 ;
-(void)unionWithRow:(int)arg1 column:(int)arg2 ;
@end

