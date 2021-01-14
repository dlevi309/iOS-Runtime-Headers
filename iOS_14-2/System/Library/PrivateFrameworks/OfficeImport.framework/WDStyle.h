/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDTableStyleOverride, NSString, WDStyleSheet;

@interface WDStyle : NSObject <NSCopying> {

	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellProperties;
	WDTableStyleOverride* mTableStyleOverrides[12];
	BOOL mHidden;
	NSString* mName;
	NSString* mId;
	int mStyleType;
	WDStyleSheet* mStyleSheet;
	WDStyle* mBaseStyle;
	WDStyle* mNextStyle;

}

@property (__weak,readonly) WDStyleSheet * styleSheet; 
@property (__weak) WDStyle * baseStyle; 
@property (__weak) WDStyle * nextStyle; 
-(id)id;
-(BOOL)hidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)setBaseStyle:(WDStyle *)arg1 ;
-(WDStyle *)baseStyle;
-(id)name;
-(id)description;
-(int)type;
-(void)setName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(WDStyleSheet *)styleSheet;
-(id)paragraphProperties;
-(id)characterProperties;
-(id)tableCellProperties;
-(id)tableProperties;
-(BOOL)isAnythingOverridden;
-(void)setNextStyle:(WDStyle *)arg1 ;
-(id)initWithStyleSheet:(id)arg1 id:(id)arg2 type:(int)arg3 ;
-(id)tableRowProperties;
-(id)tableStyleOverrideForPart:(int)arg1 ;
-(WDStyle *)nextStyle;
@end

