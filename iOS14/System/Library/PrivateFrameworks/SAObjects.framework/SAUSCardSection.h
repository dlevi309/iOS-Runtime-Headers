/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut;

@interface SAUSCardSection : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)cardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)cardSection;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

