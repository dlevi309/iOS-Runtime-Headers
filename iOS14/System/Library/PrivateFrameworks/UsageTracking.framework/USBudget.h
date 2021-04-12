/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary;

@interface USBudget : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSSet* _categoryIdentifiers;
	NSSet* _bundleIdentifiers;
	NSSet* _webDomains;
	NSString* _calendarIdentifier;
	NSDictionary* _schedule;
	long long _type;

}

@property (copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSSet * categoryIdentifiers;                //@synthesize categoryIdentifiers=_categoryIdentifiers - In the implementation block
@property (copy,readonly) NSSet * bundleIdentifiers;                  //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (copy,readonly) NSSet * webDomains;                         //@synthesize webDomains=_webDomains - In the implementation block
@property (copy,readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (copy,readonly) NSDictionary * schedule;                    //@synthesize schedule=_schedule - In the implementation block
@property (readonly) long long type;                                  //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSSet * items; 
+(BOOL)supportsSecureCoding;
-(NSString *)calendarIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)items;
-(NSSet *)webDomains;
-(id)description;
-(NSDictionary *)schedule;
-(long long)type;
-(NSSet *)categoryIdentifiers;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSSet *)bundleIdentifiers;
-(id)initWithCategories:(id)arg1 applications:(id)arg2 webDomains:(id)arg3 schedule:(id)arg4 calendarIdentifier:(id)arg5 identifier:(id)arg6 ;
-(id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5 ;
@end

