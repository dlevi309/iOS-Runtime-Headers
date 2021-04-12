/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(id)properties;
-(WDTableRow *)row;
-(void)clearProperties;
-(id)description;
-(id)text;
-(void)setIdentifier:(id)arg1 ;
-(id)identifier;
-(BOOL)useTrackedProperties;
-(void)setUseTrackedProperties:(BOOL)arg1 ;
-(id)initWithRow:(id)arg1 at:(unsigned long long)arg2 ;
-(long long)compareIndex:(id)arg1 ;
@end

