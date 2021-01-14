/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {

	long long _type;
	NSString* _context;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)SMSMechanismWithContext:(id)arg1 ;
+(id)SMSLessMechanism;
-(id)initWithType:(long long)arg1 context:(id)arg2 ;
-(NSString *)context;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

