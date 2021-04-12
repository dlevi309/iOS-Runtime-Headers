/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class NSString;

@interface CADEventCreatedFromSuggestionPredicate : EKPredicate <EKPredicateEvaluating, EKDefaultPropertiesLoading> {

	NSString* _opaqueKey;
	NSString* _extractionGroupIdentifier;

}

@property (nonatomic,readonly) NSString * opaqueKey;                              //@synthesize opaqueKey=_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSString * extractionGroupIdentifier;              //@synthesize extractionGroupIdentifier=_extractionGroupIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateForAllSuggestedEvents;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)predicateFormat;
-(id)defaultPropertiesToLoad;
-(NSString *)opaqueKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 ;
-(id)initWithExtractionGroupIdentifier:(id)arg1 ;
-(BOOL)shouldLoadDefaultProperties;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extractionGroupIdentifier;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOpaqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2 ;
@end

