/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSSet;

@interface _EARSpeechModelInfo : NSObject {

	SpeechModelInfo* _speechModelInfo;

}

@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSSet * samplingRates; 
@property (nonatomic,readonly) NSSet * tasks; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * phoneSetVersion; 
@property (nonatomic,readonly) NSString * acousticProfileVersion; 
-(NSSet *)tasks;
-(id)initWithConfig:(id)arg1 ;
-(NSString *)version;
-(NSString *)language;
-(NSSet *)samplingRates;
-(NSString *)phoneSetVersion;
-(NSString *)acousticProfileVersion;
@end

