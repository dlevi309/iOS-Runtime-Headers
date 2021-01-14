/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@class ALCity;

@interface PSTimeZoneTableCell : UITableViewCell {

	ALCity* _city;

}

@property (nonatomic,retain) ALCity * city;              //@synthesize city=_city - In the implementation block
-(ALCity *)city;
-(void)setCity:(ALCity *)arg1 ;
-(void)prepareForReuse;
-(id)_contentString;
@end

