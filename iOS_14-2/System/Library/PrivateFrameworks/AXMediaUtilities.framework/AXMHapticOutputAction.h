/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMOutputAction.h>

@class NSURL;

@interface AXMHapticOutputAction : AXMOutputAction {

	NSURL* _hapticFileURL;
	double _hapticIntensity;

}

@property (nonatomic,readonly) NSURL * hapticFileURL; 
@property (assign,nonatomic) double hapticIntensity;               //@synthesize hapticIntensity=_hapticIntensity - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)setHapticIntensity:(double)arg1 ;
-(id)_initWithURL:(id)arg1 handle:(id)arg2 ;
-(NSURL *)hapticFileURL;
-(double)hapticIntensity;
@end

