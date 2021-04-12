/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIView;

@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <NSCoding> {

	NSString* _title;
	UIView* _headerFooterView;
	double _height;

}

@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * headerFooterView;              //@synthesize headerFooterView=_headerFooterView - In the implementation block
@property (nonatomic,readonly) double height;                          //@synthesize height=_height - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(double)height;
-(id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3 ;
-(UIView *)headerFooterView;
@end

