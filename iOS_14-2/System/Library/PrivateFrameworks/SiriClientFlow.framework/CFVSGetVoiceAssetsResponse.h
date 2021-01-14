/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface CFVSGetVoiceAssetsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * voiceAssets; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getVoiceAssetsResponse;
+(id)getVoiceAssetsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setVoiceAssets:(NSArray *)arg1 ;
-(NSArray *)voiceAssets;
@end

