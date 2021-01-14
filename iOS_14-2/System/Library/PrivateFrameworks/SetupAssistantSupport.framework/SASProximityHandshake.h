/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SASProximityHandshake : NSObject <NSSecureCoding> {

	BOOL _hasPasscodeSet;
	int _simplePasscodeType;
	int _unlockType;
	long long _platformType;

}

@property (assign) long long platformType;              //@synthesize platformType=_platformType - In the implementation block
@property (assign) BOOL hasPasscodeSet;                 //@synthesize hasPasscodeSet=_hasPasscodeSet - In the implementation block
@property (assign) int simplePasscodeType;              //@synthesize simplePasscodeType=_simplePasscodeType - In the implementation block
@property (assign) int unlockType;                      //@synthesize unlockType=_unlockType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPlatformType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasPasscodeSet;
-(long long)platformType;
-(void)setHasPasscodeSet:(BOOL)arg1 ;
-(void)loadInformation;
-(int)simplePasscodeType;
-(int)unlockType;
-(void)setSimplePasscodeType:(int)arg1 ;
-(void)setUnlockType:(int)arg1 ;
@end

