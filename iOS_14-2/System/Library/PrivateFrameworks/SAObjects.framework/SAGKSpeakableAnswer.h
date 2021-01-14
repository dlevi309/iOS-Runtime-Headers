/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAGKSpeakableAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * parameters; 
@property (nonatomic,copy) NSString * templateName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)speakableAnswer;
+(id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
@end

