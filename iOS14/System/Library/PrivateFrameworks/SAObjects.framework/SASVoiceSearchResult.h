/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSData, NSString, NSNumber;

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSData * result; 
@property (nonatomic,copy) NSString * searchType; 
@property (nonatomic,copy) NSNumber * statusCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)voiceSearchResult;
-(void)setResult:(NSData *)arg1 ;
-(NSString *)searchType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(NSNumber *)statusCode;
-(NSData *)result;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
@end

