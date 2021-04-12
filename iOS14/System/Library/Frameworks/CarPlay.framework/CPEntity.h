/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CPEntity : NSObject <NSSecureCoding> {

	NSUUID* _identifier;

}

@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)objectForIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSUUID *)identifier;
@end

