/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSURL *)externalId;
-(void)setExternalId:(NSURL *)arg1 ;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
@end

