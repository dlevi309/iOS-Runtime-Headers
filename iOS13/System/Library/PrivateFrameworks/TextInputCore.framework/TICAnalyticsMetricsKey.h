/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TICAnalyticsMetricsKey : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _keyboardType;
	NSString* _language;
	NSString* _region;
	NSString* _layoutName;
	long long _userInterfaceIdiom;

}

@property (nonatomic,readonly) NSString * language;                       //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * region;                         //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSString * layoutName;                     //@synthesize layoutName=_layoutName - In the implementation block
@property (nonatomic,readonly) unsigned char keyboardType;                //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long userInterfaceIdiom;              //@synthesize userInterfaceIdiom=_userInterfaceIdiom - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyboardTypeEnumToString:(unsigned char)arg1 ;
+(unsigned char)keyboardTypeStringToEnum:(id)arg1 ;
+(id)userInterfaceIdiomToString:(long long)arg1 ;
+(long long)userInterfaceIdiomStringToEnum:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)keyboardType;
-(NSString *)region;
-(NSString *)language;
-(long long)userInterfaceIdiom;
-(NSString *)layoutName;
-(id)initWithKeyboardState:(id)arg1 ;
-(id)initWithLanguage:(id)arg1 region:(id)arg2 layoutName:(id)arg3 keyboardType:(unsigned char)arg4 userInterfaceIdiom:(long long)arg5 ;
@end

