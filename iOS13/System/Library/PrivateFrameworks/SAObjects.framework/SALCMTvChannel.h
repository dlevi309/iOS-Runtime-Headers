/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)channelIdentifier;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)callSign;
-(void)setCallSign:(NSString *)arg1 ;
-(NSURL *)streamUrl;
-(void)setStreamUrl:(NSURL *)arg1 ;
@end

