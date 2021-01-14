/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NFReaderSessionConfig : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _uiMode;
	unsigned long long _sessionType;
	NSString* _initialScanText;
	NSArray* _vasPasses;

}

@property (nonatomic,readonly) unsigned long long uiMode;                    //@synthesize uiMode=_uiMode - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionType;               //@synthesize sessionType=_sessionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialScanText;              //@synthesize initialScanText=_initialScanText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * vasPasses;                     //@synthesize vasPasses=_vasPasses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sessionConfigWithUIMode:(unsigned long long)arg1 sessionType:(unsigned long long)arg2 initialScanText:(id)arg3 vasPass:(id)arg4 ;
+(id)sessionTypeString:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)sessionType;
-(unsigned long long)uiMode;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)initialScanText;
-(NSArray *)vasPasses;
@end

