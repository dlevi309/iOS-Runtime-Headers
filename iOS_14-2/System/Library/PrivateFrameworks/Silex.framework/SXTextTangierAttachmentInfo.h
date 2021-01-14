/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

