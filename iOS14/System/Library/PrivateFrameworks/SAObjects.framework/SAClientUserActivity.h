/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUserActivity.h>

@class NSArray, NSString, NSDictionary, NSURL;

@interface SAClientUserActivity : SAUserActivity

@property (nonatomic,copy) NSArray * keywords; 
@property (nonatomic,copy) NSArray * requiredUserInfoKeys; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSURL * webpageURL; 
+(id)clientUserActivity;
+(id)clientUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSURL *)webpageURL;
-(id)groupIdentifier;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSDictionary *)userInfo;
-(NSArray *)keywords;
-(id)encodedClassName;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setRequiredUserInfoKeys:(NSArray *)arg1 ;
-(NSString *)type;
-(NSArray *)requiredUserInfoKeys;
-(NSString *)title;
@end

