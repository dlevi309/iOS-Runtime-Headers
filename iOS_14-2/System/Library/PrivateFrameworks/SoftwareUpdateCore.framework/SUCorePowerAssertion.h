/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUCorePowerAssertion : NSObject <NSSecureCoding> {

	int _activeAssertionCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) int activeAssertionCount;              //@synthesize activeAssertionCount=_activeAssertionCount - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                  //@synthesize assertionID=_assertionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(id)description;
-(int)activeAssertionCount;
-(void)setActiveAssertionCount:(int)arg1 ;
-(id)summary;
-(id)copy;
-(unsigned)assertionID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

