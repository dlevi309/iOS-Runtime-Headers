/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMeasurement;

@interface HDBound : NSObject <NSSecureCoding, NSCopying> {

	BOOL _open;
	NSMeasurement* _value;

}

@property (nonatomic,copy) NSMeasurement * value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL open;                        //@synthesize open=_open - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)setOpen:(BOOL)arg1 ;
-(BOOL)open;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSMeasurement *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMeasurement *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(id)arg1 open:(BOOL)arg2 ;
-(BOOL)isEqualToBound:(id)arg1 ;
@end

