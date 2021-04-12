/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData, NSUUID;

@interface HMSettingValue : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSNumber* _numberValue;
	NSString* _stringValue;
	NSData* _dataValue;
	NSUUID* _selectionIdentifier;
	NSString* _selectionValue;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberValue;                    //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataValue;                        //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * selectionIdentifier;              //@synthesize selectionIdentifier=_selectionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionValue;                 //@synthesize selectionValue=_selectionValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)numberValue;
-(NSData *)dataValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(long long)type;
-(id)initDataSettingWithValue:(id)arg1 ;
-(id)initNumberSettingWithValue:(id)arg1 ;
-(id)initStringSettingWithValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)selectionValue;
-(NSUUID *)selectionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

