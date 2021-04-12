/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appVocabularyType;
-(void)setAppVocabularyType:(NSString *)arg1 ;
@end

