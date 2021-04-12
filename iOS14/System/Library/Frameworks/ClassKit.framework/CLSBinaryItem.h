/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSActivityItem.h>

@interface CLSBinaryItem : CLSActivityItem {

	BOOL _value;
	long long _valueType;

}

@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) BOOL value; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(long long)valueType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueType:(long long)arg1 ;
-(id)_init;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(BOOL)value;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 ;
@end

