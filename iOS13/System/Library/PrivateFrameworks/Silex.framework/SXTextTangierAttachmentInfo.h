/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDDrawableInfo.h>

@class SXTextExclusionPath;

@interface SXTextTangierAttachmentInfo : TSDDrawableInfo {

	SXTextExclusionPath* _exclusionPath;
	NSRange _actualRange;

}

@property (nonatomic,retain) SXTextExclusionPath * exclusionPath;              //@synthesize exclusionPath=_exclusionPath - In the implementation block
@property (assign,nonatomic) NSRange actualRange;                              //@synthesize actualRange=_actualRange - In the implementation block
-(Class)layoutClass;
-(Class)repClass;
-(SXTextExclusionPath *)exclusionPath;
-(void)setExclusionPath:(SXTextExclusionPath *)arg1 ;
-(NSRange)actualRange;
-(void)setActualRange:(NSRange)arg1 ;
@end

