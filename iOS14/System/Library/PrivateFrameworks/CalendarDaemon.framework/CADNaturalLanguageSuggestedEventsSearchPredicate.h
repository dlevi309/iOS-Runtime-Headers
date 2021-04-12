/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding> {

	NSString* _searchString;
	BOOL _allNLEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 allNLEvents:(BOOL)arg2 ;
-(id)initWithSearchString:(id)arg1 ;
-(NSString *)description;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithCoder:(id)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

