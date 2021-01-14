/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAUIAppPunchOut, NSString;

@interface SAUSSection : SADomainObject

@property (nonatomic,copy) NSArray * cardResults; 
@property (nonatomic,copy) NSArray * genericResults; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * sectionTitle; 
+(id)section;
+(id)sectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(NSArray *)cardResults;
-(void)setCardResults:(NSArray *)arg1 ;
-(NSArray *)genericResults;
-(void)setGenericResults:(NSArray *)arg1 ;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

