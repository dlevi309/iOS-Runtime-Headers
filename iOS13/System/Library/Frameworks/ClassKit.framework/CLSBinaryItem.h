/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(long long)valueType;
-(void)setValueType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 type:(long long)arg3 ;
@end

