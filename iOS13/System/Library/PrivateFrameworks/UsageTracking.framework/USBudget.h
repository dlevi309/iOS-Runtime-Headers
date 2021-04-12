/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(NSString *)identifier;
-(NSSet *)items;
-(NSDictionary *)schedule;
-(NSSet *)bundleIdentifiers;
-(NSSet *)webDomains;
-(NSSet *)categoryIdentifiers;
-(id)initWithCategories:(id)arg1 applications:(id)arg2 webDomains:(id)arg3 schedule:(id)arg4 calendarIdentifier:(id)arg5 identifier:(id)arg6 ;
-(id)initWithType:(long long)arg1 items:(id)arg2 schedule:(id)arg3 calendarIdentifier:(id)arg4 identifier:(id)arg5 ;
@end

