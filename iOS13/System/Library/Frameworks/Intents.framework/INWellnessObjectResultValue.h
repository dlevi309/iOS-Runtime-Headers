/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(NSString *)unit;
-(long long)resultType;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INDateComponentsRange *)recordDate;
-(id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4 ;
@end

