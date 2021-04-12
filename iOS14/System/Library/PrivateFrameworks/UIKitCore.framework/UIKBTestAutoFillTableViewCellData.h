/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableViewCell *)cell;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCell:(id)arg1 height:(double)arg2 ;
@end

