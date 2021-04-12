/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NFVASPassConfig : NSObject <NSSecureCoding, NSCopying> {

	long long _vasMode;
	NSString* _passIdentifier;

}

@property (nonatomic,readonly) long long vasMode;                           //@synthesize vasMode=_vasMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * passIdentifier;              //@synthesize passIdentifier=_passIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passConfigWithMode:(long long)arg1 passIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)passIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(long long)vasMode;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

