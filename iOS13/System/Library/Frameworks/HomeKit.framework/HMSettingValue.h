/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(id)initDataSettingWithValue:(id)arg1 ;
-(id)initNumberSettingWithValue:(id)arg1 ;
-(id)initStringSettingWithValue:(id)arg1 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 numberValue:(id)arg3 dataValue:(id)arg4 selectionIdentifier:(id)arg5 selectionValue:(id)arg6 ;
-(NSUUID *)selectionIdentifier;
-(NSString *)selectionValue;
@end

