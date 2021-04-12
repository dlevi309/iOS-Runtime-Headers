/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {

	NSArray* _values;
	NSDictionary* _titleDict;

}
-(id)titleLabel;
-(id)controlValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)prepareForReuse;
-(id)newControl;
-(void)setValue:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)canReload;
-(void)setValues:(id)arg1 titleDictionary:(id)arg2 ;
@end

