/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)headerFields;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSURL *)downloadUrl;
-(void)setDownloadUrl:(NSURL *)arg1 ;
-(NSString *)requestMethodType;
-(void)setRequestMethodType:(NSString *)arg1 ;
@end

