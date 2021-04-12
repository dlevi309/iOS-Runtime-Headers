/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)version;
-(NSString *)language;
-(NSSet *)tasks;
-(id)initWithConfig:(id)arg1 ;
-(NSSet *)samplingRates;
-(NSString *)phoneSetVersion;
-(NSString *)acousticProfileVersion;
@end

