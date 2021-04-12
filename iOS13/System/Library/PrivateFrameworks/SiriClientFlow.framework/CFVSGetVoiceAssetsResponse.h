/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface CFVSGetVoiceAssetsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * voiceAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getVoiceAssetsResponse;
+(id)getVoiceAssetsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setVoiceAssets:(NSArray *)arg1 ;
-(NSArray *)voiceAssets;
@end

