/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BKSHIDEventDeferringToken *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BKSHIDEventDeferringEnvironment *)environment;
-(BKSHIDEventDisplay *)display;
-(id)_initWithEnvironment:(id)arg1 display:(id)arg2 token:(id)arg3 ;
@end

