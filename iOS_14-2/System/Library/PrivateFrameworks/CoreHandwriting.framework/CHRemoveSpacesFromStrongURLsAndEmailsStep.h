/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHPatternNetwork;

@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStep {

	CHPatternNetwork* _patternFST;

}

@property (nonatomic,retain) CHPatternNetwork * patternFST;              //@synthesize patternFST=_patternFST - In the implementation block
-(id)process:(id)arg1 ;
-(void)dealloc;
-(CHPatternNetwork *)patternFST;
-(void)setPatternFST:(CHPatternNetwork *)arg1 ;
-(id)initWithPatternFst:(id)arg1 ;
@end

