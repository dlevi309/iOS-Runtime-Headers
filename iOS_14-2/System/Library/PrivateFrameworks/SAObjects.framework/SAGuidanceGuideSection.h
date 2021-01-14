/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAGuidanceGuideSection : SADomainObject

@property (nonatomic,copy) NSArray * guideUtterances; 
@property (nonatomic,copy) NSString * sectionName; 
+(id)guideSection;
+(id)guideSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sectionName;
-(NSArray *)guideUtterances;
-(void)setGuideUtterances:(NSArray *)arg1 ;
-(void)setSectionName:(NSString *)arg1 ;
@end

