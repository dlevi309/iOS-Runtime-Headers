/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {

	long long _indentationLevel;
	UITableViewCell* _cell;
	double _height;

}

@property (assign,nonatomic) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)row;
-(void)setHeight:(double)arg1 ;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(id)initWithCoder:(id)arg1 ;
-(long long)indentationLevel;
-(void)setIndentationLevel:(long long)arg1 ;
@end

