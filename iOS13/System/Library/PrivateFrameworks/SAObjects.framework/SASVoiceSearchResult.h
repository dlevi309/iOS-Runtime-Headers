/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)voiceSearchResult;
+(id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)statusCode;
-(NSData *)result;
-(id)groupIdentifier;
-(void)setResult:(NSData *)arg1 ;
-(NSString *)searchType;
-(void)setSearchType:(NSString *)arg1 ;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)encodedClassName;
@end

