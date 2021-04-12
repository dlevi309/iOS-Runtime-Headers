/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)guideUtterances;
-(void)setGuideUtterances:(NSArray *)arg1 ;
-(NSString *)sectionName;
-(void)setSectionName:(NSString *)arg1 ;
@end

