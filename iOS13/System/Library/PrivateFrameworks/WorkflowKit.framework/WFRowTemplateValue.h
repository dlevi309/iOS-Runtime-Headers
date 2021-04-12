/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSCoding;
@class NSString, NSNumber, NSDate;

@interface WFRowTemplateValue : NSObject <NSSecureCoding> {

	BOOL _removable;
	Class _contentItemClass;
	NSString* _contentPropertyName;
	long long _comparisonOperator;
	id<NSCopying><NSCoding> _enumeration;
	NSString* _string;
	NSNumber* _boolean;
	NSNumber* _number;
	NSString* _phone;
	NSString* _email;
	NSNumber* _calendarUnit;
	NSNumber* _byteCountUnit;
	NSDate* _date;
	NSDate* _anotherDate;

}

@property (nonatomic,readonly) Class contentItemClass;                         //@synthesize contentItemClass=_contentItemClass - In the implementation block
@property (nonatomic,readonly) NSString * contentPropertyName;                 //@synthesize contentPropertyName=_contentPropertyName - In the implementation block
@property (nonatomic,readonly) long long comparisonOperator;                   //@synthesize comparisonOperator=_comparisonOperator - In the implementation block
@property (nonatomic,readonly) BOOL removable;                                 //@synthesize removable=_removable - In the implementation block
@property (nonatomic,retain) id<NSCopying><NSCoding> enumeration;              //@synthesize enumeration=_enumeration - In the implementation block
@property (nonatomic,retain) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) NSNumber * boolean;                               //@synthesize boolean=_boolean - In the implementation block
@property (nonatomic,retain) NSNumber * number;                                //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) NSString * phone;                                 //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * email;                                 //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * calendarUnit;                          //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,retain) NSNumber * byteCountUnit;                         //@synthesize byteCountUnit=_byteCountUnit - In the implementation block
@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * anotherDate;                             //@synthesize anotherDate=_anotherDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
-(NSNumber *)calendarUnit;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)phone;
-(void)setPhone:(NSString *)arg1 ;
-(id)initWithContentItemClass:(Class)arg1 contentPropertyName:(id)arg2 comparisonOperator:(long long)arg3 removable:(BOOL)arg4 ;
-(Class)contentItemClass;
-(NSString *)contentPropertyName;
-(long long)comparisonOperator;
-(BOOL)removable;
-(id<NSCopying><NSCoding>)enumeration;
-(void)setEnumeration:(id<NSCopying><NSCoding>)arg1 ;
-(NSNumber *)boolean;
-(void)setBoolean:(NSNumber *)arg1 ;
-(void)setCalendarUnit:(NSNumber *)arg1 ;
-(NSNumber *)byteCountUnit;
-(void)setByteCountUnit:(NSNumber *)arg1 ;
-(NSDate *)anotherDate;
-(void)setAnotherDate:(NSDate *)arg1 ;
@end

