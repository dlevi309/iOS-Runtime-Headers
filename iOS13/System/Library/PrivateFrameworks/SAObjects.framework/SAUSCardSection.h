/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut;

@interface SAUSCardSection : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
+(id)cardSection;
+(id)cardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(id)encodedClassName;
@end

