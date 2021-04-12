/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKStructuredLocation, UITableViewCell;

@interface EKUILocationAndCellPair : NSObject {

	EKStructuredLocation* _location;
	UITableViewCell* _cell;

}

@property (retain) EKStructuredLocation * location;              //@synthesize location=_location - In the implementation block
@property (retain) UITableViewCell * cell;                       //@synthesize cell=_cell - In the implementation block
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(EKStructuredLocation *)location;
-(void)setLocation:(EKStructuredLocation *)arg1 ;
-(id)description;
@end

