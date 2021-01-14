/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSString, NSArray;

@interface INWellnessObjectResultValue : NSObject <NSCopying, NSSecureCoding> {

	INDateComponentsRange* _recordDate;
	NSString* _unit;
	NSArray* _values;
	long long _resultType;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * recordDate;              //@synthesize recordDate=_recordDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * unit;                                 //@synthesize unit=_unit - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                                //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) long long resultType;                                 //@synthesize resultType=_resultType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSArray *)values;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)resultType;
-(id)description;
-(id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4 ;
-(NSString *)unit;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INDateComponentsRange *)recordDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

