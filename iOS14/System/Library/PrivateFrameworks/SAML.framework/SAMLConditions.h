/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSNumber;

@interface SAMLConditions : SAMLBaseElement {

	NSArray* _conditions;

}

@property (nonatomic,readonly) NSDate * notBefore; 
@property (nonatomic,readonly) NSDate * notOnOrAfter; 
@property (nonatomic,readonly) NSArray * conditions;                                  //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) NSArray * audienceRestrictions; 
@property (nonatomic,readonly) BOOL oneTimeUse; 
@property (nonatomic,readonly) NSArray * proxyRestrictions; 
@property (nonatomic,readonly) NSNumber * proxyRestrictionAudienceCount; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)conditions;
-(NSDate *)notBefore;
-(NSDate *)notOnOrAfter;
-(NSArray *)audienceRestrictions;
-(BOOL)oneTimeUse;
-(NSArray *)proxyRestrictions;
-(NSNumber *)proxyRestrictionAudienceCount;
-(BOOL)assertionMeetsConditions:(id*)arg1 ;
@end

