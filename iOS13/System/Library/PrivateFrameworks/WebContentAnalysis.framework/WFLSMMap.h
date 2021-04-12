/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSNumber *)threshold;
-(void)setThreshold:(NSNumber *)arg1 ;
-(LSMMapRef)_map;
-(id)initWithMap:(LSMMapRef)arg1 ;
-(long long)numberOfCategories;
-(void)_setMap:(LSMMapRef)arg1 ;
-(id)evaluate:(id)arg1 ;
-(id)wordDump:(id)arg1 ;
-(id)initWithMapFromURL:(id)arg1 ;
-(id)initWithMapFromFilePath:(id)arg1 ;
-(LSMTextRef)_createLSMTextFromString:(id)arg1 ;
@end

