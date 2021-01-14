/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface MSSession : NSObject <NSSecureCoding> {

	NSUUID* _identifier;

}

@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

