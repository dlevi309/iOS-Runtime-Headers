/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupAppVocabularySearchRequest : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSString * appVocabularyType; 
@property (nonatomic,copy) NSString * query; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appVocabularySearchRequest;
+(id)appVocabularySearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appVocabularyType;
-(void)setAppVocabularyType:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
@end

