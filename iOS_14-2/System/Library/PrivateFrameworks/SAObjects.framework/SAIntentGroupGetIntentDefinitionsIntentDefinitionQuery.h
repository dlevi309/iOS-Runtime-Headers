/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupGetIntentDefinitionsIntentDefinitionQuery : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * entity; 
@property (nonatomic,copy) NSString * verb; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getIntentDefinitionsIntentDefinitionQuery;
+(id)getIntentDefinitionsIntentDefinitionQueryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)verb;
-(void)setEntity:(NSString *)arg1 ;
-(NSString *)entity;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setVerb:(NSString *)arg1 ;
@end

