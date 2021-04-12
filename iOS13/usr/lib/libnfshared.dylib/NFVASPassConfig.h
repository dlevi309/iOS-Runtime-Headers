/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passIdentifier;
-(long long)vasMode;
@end

