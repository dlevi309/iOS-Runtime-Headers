/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FATField *)field;
-(void)setValue:(id)arg1 ;
-(void)setField:(FATField *)arg1 ;
-(id)value;
@end

