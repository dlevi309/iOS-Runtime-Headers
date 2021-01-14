/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADFill : OADProperties <NSCopying> {

	BOOL mDefinedByStyle;
	BOOL _definedByStyle;

}

@property (assign) BOOL definedByStyle;              //@synthesize definedByStyle=_definedByStyle - In the implementation block
-(BOOL)isOverridden;
-(float)alpha;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)definedByStyle;
-(BOOL)usesPlaceholderColor;
-(void)setDefinedByStyle:(BOOL)arg1 ;
@end

