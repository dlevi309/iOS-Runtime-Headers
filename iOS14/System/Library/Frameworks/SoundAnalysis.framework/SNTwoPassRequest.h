/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

@class SNTwoPassConfiguration;


@protocol SNTwoPassRequest <SNRequest>
@property (readonly) SNTwoPassConfiguration * twoPassConfiguration; 
@required
-(id)createSecondPassController;
-(SNTwoPassConfiguration *)twoPassConfiguration;

@end

