/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(NSString *)labelTemplateComponentStyle;
-(void)setLabelTemplateComponentStyle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

