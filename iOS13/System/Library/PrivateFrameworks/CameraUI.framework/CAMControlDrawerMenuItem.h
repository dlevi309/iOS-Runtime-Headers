/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString, NSNumber;

@interface CAMControlDrawerMenuItem : NSObject {

	NSString* _title;
	NSString* _selectedTitle;
	NSNumber* _value;

}

@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedTitle;              //@synthesize selectedTitle=_selectedTitle - In the implementation block
@property (nonatomic,readonly) NSNumber * value;                           //@synthesize value=_value - In the implementation block
-(NSNumber *)value;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 selectedTitle:(id)arg2 value:(id)arg3 ;
-(id)initWithTitle:(id)arg1 value:(id)arg2 ;
-(NSString *)selectedTitle;
@end

