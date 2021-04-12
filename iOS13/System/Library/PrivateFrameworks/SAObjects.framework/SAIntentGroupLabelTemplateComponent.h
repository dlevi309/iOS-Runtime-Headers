/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (nonatomic,copy) NSString * labelTemplateComponentStyle; 
@property (nonatomic,copy) NSString * text; 
+(id)labelTemplateComponent;
+(id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)labelTemplateComponentStyle;
-(void)setLabelTemplateComponentStyle:(NSString *)arg1 ;
@end

