/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSNumber;

@interface WFLSMMap : NSObject {

	LSMMapRef map;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)mapFromFilePath:(id)arg1 ;
+(id)mapWithMap:(LSMMapRef)arg1 ;
+(id)mapFromURL:(id)arg1 ;
-(NSNumber *)threshold;
-(long long)numberOfCategories;
-(id)evaluate:(id)arg1 ;
-(void)_setMap:(LSMMapRef)arg1 ;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(void)dealloc;
-(LSMMapRef)_map;
-(void)setThreshold:(NSNumber *)arg1 ;
-(id)wordDump:(id)arg1 ;
-(id)initWithMapFromURL:(id)arg1 ;
-(id)initWithMapFromFilePath:(id)arg1 ;
-(LSMTextRef)_createLSMTextFromString:(id)arg1 ;
@end

