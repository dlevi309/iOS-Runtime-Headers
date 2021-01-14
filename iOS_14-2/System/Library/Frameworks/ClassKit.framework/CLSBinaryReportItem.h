/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	BOOL _value;
	long long _valueType;

}

@property (assign,nonatomic) BOOL value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(long long)valueType;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(BOOL)value;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end

