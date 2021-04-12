/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SASAudioAnalytics : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * acousticFeatures; 
@property (nonatomic,copy) NSDictionary * speechRecognitionFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)audioAnalytics;
-(id)af_audioAnalytics;
-(id)groupIdentifier;
-(NSDictionary *)speechRecognitionFeatures;
-(NSDictionary *)acousticFeatures;
-(id)encodedClassName;
-(void)setAcousticFeatures:(NSDictionary *)arg1 ;
-(void)setSpeechRecognitionFeatures:(NSDictionary *)arg1 ;
@end

