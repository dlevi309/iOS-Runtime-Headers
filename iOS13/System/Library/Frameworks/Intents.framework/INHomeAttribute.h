/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INHomeAttributeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding> {

	BOOL _boolValue;
	long long _type;
	long long _valueType;
	double _doubleValue;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long valueType;                      //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)valueType;
-(id)initWithType:(long long)arg1 boolValue:(BOOL)arg2 ;
-(id)initWithType:(long long)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(BOOL)arg3 doubleValue:(double)arg4 stringValue:(id)arg5 ;
@end

