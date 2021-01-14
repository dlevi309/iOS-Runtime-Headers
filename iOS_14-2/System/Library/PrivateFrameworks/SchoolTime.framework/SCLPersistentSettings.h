/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCLScheduleSettings;

@interface SCLPersistentSettings : NSObject <NSSecureCoding, NSCopying> {

	BOOL _manualSchoolModeEnabled;
	SCLScheduleSettings* _scheduleSettings;

}

@property (nonatomic,retain) SCLScheduleSettings * scheduleSettings;                                     //@synthesize scheduleSettings=_scheduleSettings - In the implementation block
@property (assign,getter=isManualSchoolModeEnabled,nonatomic) BOOL manualSchoolModeEnabled;              //@synthesize manualSchoolModeEnabled=_manualSchoolModeEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCLScheduleSettings *)scheduleSettings;
-(void)setScheduleSettings:(SCLScheduleSettings *)arg1 ;
-(BOOL)isManualSchoolModeEnabled;
-(void)setManualSchoolModeEnabled:(BOOL)arg1 ;
@end

