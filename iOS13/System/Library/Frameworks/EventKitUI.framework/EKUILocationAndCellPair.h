/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class EKStructuredLocation, UITableViewCell;

@interface EKUILocationAndCellPair : NSObject {

	EKStructuredLocation* _location;
	UITableViewCell* _cell;

}

@property (retain) EKStructuredLocation * location;              //@synthesize location=_location - In the implementation block
@property (retain) UITableViewCell * cell;                       //@synthesize cell=_cell - In the implementation block
-(EKStructuredLocation *)location;
-(void)setLocation:(EKStructuredLocation *)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
@end

