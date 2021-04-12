/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>

@class NSURL, NSDictionary, NSString;

@interface SACFScriptUrlInformation : SABaseAceObject

@property (nonatomic,copy) NSURL * downloadUrl; 
@property (nonatomic,copy) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * requestMethodType; 
+(id)scriptUrlInformation;
+(id)scriptUrlInformationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSDictionary *)headerFields;
-(NSURL *)downloadUrl;
-(void)setDownloadUrl:(NSURL *)arg1 ;
-(NSString *)requestMethodType;
-(void)setRequestMethodType:(NSString *)arg1 ;
@end

