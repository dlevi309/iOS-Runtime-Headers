/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSHIDEventAuthenticationKeyRetentionPolicy : NSObject <NSCopying> {

	double _keySigningTimeout;
	double _keyVerificationTimeout;

}

@property (assign,nonatomic) double keySigningTimeout;                   //@synthesize keySigningTimeout=_keySigningTimeout - In the implementation block
@property (assign,nonatomic) double keyVerificationTimeout;              //@synthesize keyVerificationTimeout=_keyVerificationTimeout - In the implementation block
-(double)keySigningTimeout;
-(void)setKeySigningTimeout:(double)arg1 ;
-(double)keyVerificationTimeout;
-(void)setKeyVerificationTimeout:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

