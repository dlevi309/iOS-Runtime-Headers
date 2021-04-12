/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface STUIDevice : NSObject <NSCopying> {

	short _platform;
	NSString* _name;
	NSString* _identifier;
	NSDate* _lastFamilyCheckinDate;

}

@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (readonly) short platform;                                        //@synthesize platform=_platform - In the implementation block
@property (nonatomic,readonly) NSDate * lastFamilyCheckinDate;              //@synthesize lastFamilyCheckinDate=_lastFamilyCheckinDate - In the implementation block
-(short)platform;
-(NSDate *)lastFamilyCheckinDate;
-(NSString *)name;
-(id)initWithName:(id)arg1 identifier:(id)arg2 platform:(short)arg3 lastFamilyCheckinDate:(id)arg4 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

