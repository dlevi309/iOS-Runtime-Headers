/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPRequest.h>

@class VCPImageHumanPoseAnalyzer, NSArray, NSMutableArray;

@interface VCPHumanPoseVideoRequest : VCPRequest {

	int _personID;
	int _preferredWidth;
	int _preferredHeight;
	unsigned _preferredFormat;
	VCPImageHumanPoseAnalyzer* _analyzer;
	NSArray* _existingPersons;
	NSMutableArray* _existingPersonsArray;

}
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(float)normDistance:(CGPoint)arg1 point2:(CGPoint)arg2 ;
-(int)associatePersons:(id)arg1 withExisingPersons:(id)arg2 ;
-(void)computeActionScoreForPerson:(id)arg1 ;
-(void)computeVarWithID:(id)arg1 index1:(int)arg2 index2:(int)arg3 interVar:(float*)arg4 intraVar:(float*)arg5 ;
-(float)bodyDistance:(id)arg1 withBodyB:(id)arg2 ;
-(id)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned)preferredPixelFormat;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
@end

