/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationServerEndpointFeatures.h>

@class NSString, FTServerEndpointFeatures;

@interface FTMutableSpeechTranslationServerEndpointFeatures : FTSpeechTranslationServerEndpointFeatures

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * source_locale; 
@property (nonatomic,copy) FTServerEndpointFeatures * server_endpoint_features; 
-(id)init;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(NSString *)source_locale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource_locale:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
-(FTServerEndpointFeatures *)server_endpoint_features;
-(void)setServer_endpoint_features:(FTServerEndpointFeatures *)arg1 ;
@end

