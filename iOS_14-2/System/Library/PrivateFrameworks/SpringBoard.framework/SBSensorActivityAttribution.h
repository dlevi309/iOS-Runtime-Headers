/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBActivityAttribution.h>
#import <libobjc.A.dylib/SBFSensorActivityAttribution.h>

@class NSString;

@interface SBSensorActivityAttribution : SBActivityAttribution <SBFSensorActivityAttribution> {

	long long _sensor;

}

@property (nonatomic,readonly) long long sensor;                              //@synthesize sensor=_sensor - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * attributionGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)sensor;
-(id)initWithSTActivityAttribution:(id)arg1 sensor:(long long)arg2 ;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
@end

