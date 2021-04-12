/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding> {

	UITableViewCell* _cell;
	double _height;

}

@property (nonatomic,readonly) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) double height;                       //@synthesize height=_height - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)height;
-(UITableViewCell *)cell;
-(id)initWithCell:(id)arg1 height:(double)arg2 ;
@end

