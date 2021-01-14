/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUITemplateAttributedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * attributeRuns; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedString;
+(id)attributedStringWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSArray *)attributeRuns;
-(void)setAttributeRuns:(NSArray *)arg1 ;
@end

