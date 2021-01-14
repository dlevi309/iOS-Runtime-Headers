/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSDictionary;

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * aceAudioData; 
@property (nonatomic,copy) NSArray * dialogStrings; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSArray * streamIds; 
+(id)preSynthesizeTTS;
+(id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)aceAudioData;
-(void)setAceAudioData:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSArray *)dialogStrings;
-(void)setDialogStrings:(NSArray *)arg1 ;
-(NSArray *)streamIds;
-(void)setStreamIds:(NSArray *)arg1 ;
@end

