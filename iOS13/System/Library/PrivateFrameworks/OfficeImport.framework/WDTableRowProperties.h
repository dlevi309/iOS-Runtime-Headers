/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD116 mOriginalProperties;
	SCD_Struct_WD116 mTrackedProperties;

}
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)height;
-(void)setHeight:(long long)arg1 ;
-(void)addProperties:(id)arg1 ;
-(BOOL)header;
-(void)setHeader:(BOOL)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)addPropertiesValues:(SCD_Struct_WD116*)arg1 to:(SCD_Struct_WD116*)arg2 ;
-(short)widthBefore;
-(void)setWidthBefore:(short)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(int)widthBeforeType;
-(void)setWidthBeforeType:(int)arg1 ;
-(BOOL)isWidthBeforeTypeOverridden;
-(short)widthAfter;
-(void)setWidthAfter:(short)arg1 ;
-(BOOL)isWidthAfterOverridden;
-(int)widthAfterType;
-(void)setWidthAfterType:(int)arg1 ;
-(BOOL)isWidthAfterTypeOverridden;
-(int)heightType;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isHeightTypeOverridden;
-(BOOL)isHeaderOverridden;
@end

