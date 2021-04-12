/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TLAlertStoppingOptions : NSObject <NSCopying> {

	BOOL _shouldWaitUntilEndOfCurrentRepetition;
	double _fadeOutDuration;

}

@property (assign,nonatomic) double fadeOutDuration;                                  //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;              //@synthesize shouldWaitUntilEndOfCurrentRepetition=_shouldWaitUntilEndOfCurrentRepetition - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeOutDuration;
-(BOOL)shouldWaitUntilEndOfCurrentRepetition;
-(void)setShouldWaitUntilEndOfCurrentRepetition:(BOOL)arg1 ;
@end

