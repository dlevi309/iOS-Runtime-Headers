/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class WDTableCellProperties, WDText, NSString, WDTableRow;

@interface WDTableCell : NSObject {

	unsigned long long mIndex;
	WDTableCellProperties* mProperties;
	WDText* mText;
	NSString* mIdentifier;
	BOOL mUseTrackedProperties;
	WDTableRow* mRow;

}

@property (__weak,readonly) WDTableRow * row; 
-(id)description;
-(id)identifier;
-(unsigned long long)index;
-(void)setIdentifier:(id)arg1 ;
-(id)properties;
-(id)text;
-(void)clearProperties;
-(WDTableRow *)row;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(long long)compareIndex:(id)arg1 ;
@end

