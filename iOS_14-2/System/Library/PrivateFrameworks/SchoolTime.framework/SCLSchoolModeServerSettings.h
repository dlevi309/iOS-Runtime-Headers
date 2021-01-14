/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCLScheduleSettings, SCLState;

@interface SCLSchoolModeServerSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _loaded;
	SCLScheduleSettings* _scheduleSettings;
	SCLState* _state;

}

@property (nonatomic,copy) SCLScheduleSettings * scheduleSettings;              //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (nonatomic,copy) SCLState * state;                                    //@synthesize state=_state - In the implementation block
@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                       //@synthesize loaded=_loaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithSettings:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setState:(SCLState *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCLState *)state;
-(BOOL)isLoaded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLScheduleSettings *)arg1 ;
@end

