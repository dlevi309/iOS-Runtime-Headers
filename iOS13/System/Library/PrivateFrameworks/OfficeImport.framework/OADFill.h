/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)alpha;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)definedByStyle;
-(BOOL)usesPlaceholderColor;
-(BOOL)isOverridden;
-(void)setDefinedByStyle:(BOOL)arg1 ;
@end

