/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSMutableArray;

@interface _CACGesturePointQueue : NSObject {

	NSMutableArray* _nonSentinelPoints;

}

@property (nonatomic,readonly) NSMutableArray * nonSentinelPoints;              //@synthesize nonSentinelPoints=_nonSentinelPoints - In the implementation block
-(id)init;
-(NSMutableArray *)nonSentinelPoints;
-(unsigned long long)effectiveStartIndexBasedOnLength;
@end

