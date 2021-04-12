/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class FATField;

@interface FATArgument : NSObject {

	FATField* _field;
	id _value;

}

@property (nonatomic,retain) FATField * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) id value;                      //@synthesize value=_value - In the implementation block
+(id)argumentWithField:(id)arg1 value:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(FATField *)field;
-(void)setField:(FATField *)arg1 ;
@end

