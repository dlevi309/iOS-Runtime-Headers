/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface STScreenTimeConfiguration : NSObject <NSSecureCoding> {

	BOOL _enforcesChildRestrictions;

}

@property (assign) BOOL enforcesChildRestrictions;              //@synthesize enforcesChildRestrictions=_enforcesChildRestrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)_stScreenTimeConfigurationCommonInitWithEnforcesChildRestrictions:(BOOL)arg1 ;
-(BOOL)enforcesChildRestrictions;
-(id)initWithEnforcesChildRestrictions:(BOOL)arg1 ;
-(void)setEnforcesChildRestrictions:(BOOL)arg1 ;
@end

