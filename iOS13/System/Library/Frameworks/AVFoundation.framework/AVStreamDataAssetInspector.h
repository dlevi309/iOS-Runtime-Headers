/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {

	NSArray* _trackIDs;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_AV7)duration;
-(BOOL)providesPreciseDurationAndTiming;
-(id)trackIDs;
-(long long)trackCount;
-(id)initWithTrackIDs:(id)arg1 ;
@end

