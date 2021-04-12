/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, SAUIAudioDescription, NSString;

@interface SAUIAudioData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * audioBuffer; 
@property (nonatomic,retain) SAUIAudioDescription * decoderStreamDescription; 
@property (nonatomic,retain) SAUIAudioDescription * playerStreamDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioData;
+(id)audioDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)audioBuffer;
-(SAUIAudioDescription *)decoderStreamDescription;
-(void)setDecoderStreamDescription:(SAUIAudioDescription *)arg1 ;
-(SAUIAudioDescription *)playerStreamDescription;
-(void)setPlayerStreamDescription:(SAUIAudioDescription *)arg1 ;
-(void)setAudioBuffer:(NSData *)arg1 ;
@end

