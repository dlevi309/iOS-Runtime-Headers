/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setName:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)hidden;
-(WDStyleSheet *)styleSheet;
-(id)id;
-(id)paragraphProperties;
-(WDStyle *)baseStyle;
-(void)setBaseStyle:(WDStyle *)arg1 ;
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

