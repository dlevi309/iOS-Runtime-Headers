/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, SAUITemplateRange, NSString;

@interface SAUITemplateAttributedStringAttributeRun : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * attributes; 
@property (nonatomic,retain) SAUITemplateRange * range; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringAttributeRun;
+(id)attributedStringAttributeRunWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRange:(SAUITemplateRange *)arg1 ;
-(id)groupIdentifier;
-(SAUITemplateRange *)range;
-(id)encodedClassName;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)attributes;
@end

