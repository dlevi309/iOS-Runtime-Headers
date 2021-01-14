/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)fadeOutDuration;
-(id)description;
-(unsigned long long)hash;
-(void)setFadeOutDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldWaitUntilEndOfCurrentRepetition;
-(void)setShouldWaitUntilEndOfCurrentRepetition:(BOOL)arg1 ;
@end

