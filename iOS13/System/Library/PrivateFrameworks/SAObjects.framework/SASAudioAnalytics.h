/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)audioAnalytics;
+(id)audioAnalyticsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_audioAnalytics;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)speechRecognitionFeatures;
-(NSDictionary *)acousticFeatures;
-(void)setAcousticFeatures:(NSDictionary *)arg1 ;
-(void)setSpeechRecognitionFeatures:(NSDictionary *)arg1 ;
@end

