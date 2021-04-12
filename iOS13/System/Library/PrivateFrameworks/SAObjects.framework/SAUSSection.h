/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(id)encodedClassName;
-(NSArray *)cardResults;
-(void)setCardResults:(NSArray *)arg1 ;
-(NSArray *)genericResults;
-(void)setGenericResults:(NSArray *)arg1 ;
@end

