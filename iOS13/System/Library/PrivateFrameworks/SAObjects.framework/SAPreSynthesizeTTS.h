/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)aceAudioData;
-(void)setAceAudioData:(NSArray *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSArray *)dialogStrings;
-(void)setDialogStrings:(NSArray *)arg1 ;
-(NSArray *)streamIds;
-(void)setStreamIds:(NSArray *)arg1 ;
@end

