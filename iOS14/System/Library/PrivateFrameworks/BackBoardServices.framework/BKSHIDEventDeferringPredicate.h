/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDisplay, BKSHIDEventDeferringToken;

@interface BKSHIDEventDeferringPredicate : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	BKSHIDEventDisplay* _display;
	BKSHIDEventDeferringToken* _token;

}

@property (nonatomic,readonly) BKSHIDEventDeferringEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDisplay * display;                          //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringToken * token;                     //@synthesize token=_token - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BKSHIDEventDisplay *)display;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDeferringEnvironment *)environment;
-(BKSHIDEventDeferringToken *)token;
-(id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

