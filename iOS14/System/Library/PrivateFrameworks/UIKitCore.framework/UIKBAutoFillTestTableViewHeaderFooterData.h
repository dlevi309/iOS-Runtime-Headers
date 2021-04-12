/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)height;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3 ;
-(UIView *)headerFooterView;
-(NSString *)title;
@end

