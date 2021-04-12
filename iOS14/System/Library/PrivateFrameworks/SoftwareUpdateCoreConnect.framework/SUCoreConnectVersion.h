/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreConnect.framework/SoftwareUpdateCoreConnect
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SUCoreConnectVersion : NSObject <NSSecureCoding> {

	NSString* _selectorString;

}

@property (nonatomic,retain,readonly) NSString * selectorString;              //@synthesize selectorString=_selectorString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSelector:(SEL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)selectorString;
@end

