/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@class ALCity;

@interface PSTimeZoneTableCell : UITableViewCell {

	ALCity* _city;

}

@property (nonatomic,retain) ALCity * city;              //@synthesize city=_city - In the implementation block
-(void)prepareForReuse;
-(ALCity *)city;
-(id)_contentString;
-(void)setCity:(ALCity *)arg1 ;
@end

