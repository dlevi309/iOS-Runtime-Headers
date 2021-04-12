/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSDictionary, NSString;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate> {

	NSDictionary* _grammar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGrammars;
-(id)init;
-(id)getTrailingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLeadingPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getRegexPatternsForUtt:(long long)arg1 Locale:(id)arg2 ;
-(id)getLMEforLocale:(id)arg1 ;
-(id)createGrammars;
-(id)_getTrailingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getLeadingPatternsWithGrammars:(id)arg1 withLocale:(id)arg2 ;
-(id)_getRegexPatternsWithGrammars:(id)arg1 withUtt:(long long)arg2 withLocale:(id)arg3 ;
-(id)_getLMEWithGrammar:(id)arg1 withLocale:(id)arg2 ;
@end

