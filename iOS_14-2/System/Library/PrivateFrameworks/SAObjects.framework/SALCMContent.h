/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMContent : SADomainObject

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * channelId; 
@property (nonatomic,copy) NSURL * externalId; 
@property (nonatomic,copy) NSString * title; 
+(id)content;
+(id)contentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)externalId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)channelId;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(void)setExternalId:(NSURL *)arg1 ;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)title;
@end

