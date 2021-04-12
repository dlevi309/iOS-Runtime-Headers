/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TLIdentifiable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKUserActivity, NSString, NSDictionary, NSUserActivity;

@interface CLKComplication : NSObject <NSSecureCoding, TLIdentifiable, NSCopying> {

	CLKUserActivity* _clkUserActivity;
	long long _family;
	NSString* _identifier;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) long long family;                           //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)complicationWithFamily:(long long)arg1 descriptor:(id)arg2 ;
-(NSUserActivity *)userActivity;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)family;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)tl_isEqualToIdentifiable:(id)arg1 ;
@end

