/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspector.h>

@class NSArray;

@interface AVStreamDataAssetInspector : AVAssetInspector {

	NSArray* _trackIDs;

}
-(long long)trackCount;
-(id)trackIDs;
-(BOOL)providesPreciseDurationAndTiming;
-(id)initWithTrackIDs:(id)arg1 ;
-(SCD_Struct_AV6)duration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

