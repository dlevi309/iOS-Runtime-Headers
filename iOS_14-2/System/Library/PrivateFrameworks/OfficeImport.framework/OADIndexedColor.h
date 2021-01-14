/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADIndexedColor : OADColor {

	unsigned long long mIndex;

}
+(id)indexedColorWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)index;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)colorFromPalette:(id)arg1 ;
@end

