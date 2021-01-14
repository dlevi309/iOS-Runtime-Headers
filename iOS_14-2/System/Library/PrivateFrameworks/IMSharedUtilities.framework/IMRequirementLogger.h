/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMRequirementLogger : NSObject {

	unsigned char _loggingLevel;
	BOOL _throwFailures;
	const char* _categoryOverride;

}

@property (assign) unsigned char loggingLevel;                //@synthesize loggingLevel=_loggingLevel - In the implementation block
@property (assign) const char* categoryOverride;              //@synthesize categoryOverride=_categoryOverride - In the implementation block
@property (assign) BOOL throwFailures;                        //@synthesize throwFailures=_throwFailures - In the implementation block
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
-(id)init;
-(void)setLoggingLevel:(unsigned char)arg1 ;
-(id)description;
-(void)updateSettingsFromUserDefaults;
-(void)setThrowFailures:(BOOL)arg1 ;
-(BOOL)throwFailures;
-(const char*)categoryOverride;
-(unsigned char)loggingLevel;
-(void)setCategoryOverride:(const char*)arg1 ;
-(IMRequirementFailed_t)requirementDidFail:(const char*)arg1 ;
-(void)dealloc;
@end

