/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentLayoutAttributeDescriptor.h>

@class SXTextExclusionPath;

@interface SXTextComponentLayoutAttributeDescriptor : SXComponentLayoutAttributeDescriptor {

	SXTextExclusionPath* _resultingExclusionPath;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) SXTextExclusionPath * resultingExclusionPath;              //@synthesize resultingExclusionPath=_resultingExclusionPath - In the implementation block
+(id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(BOOL)arg3 withRange:(NSRange)arg4 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(SXTextExclusionPath *)resultingExclusionPath;
-(void)setResultingExclusionPath:(SXTextExclusionPath *)arg1 ;
@end

