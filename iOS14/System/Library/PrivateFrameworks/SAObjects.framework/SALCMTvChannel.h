/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL;

@interface SALCMTvChannel : SADomainObject

@property (nonatomic,copy) NSString * callSign; 
@property (nonatomic,copy) NSString * channelIdentifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSURL * streamUrl; 
+(id)tvChannel;
+(id)tvChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(NSString *)callSign;
-(NSString *)name;
-(void)setCallSign:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

