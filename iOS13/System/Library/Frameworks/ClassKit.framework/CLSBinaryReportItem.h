/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(long long)valueType;
-(void)setValueType:(long long)arg1 ;
-(void)add:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end

