/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface AVEditSerializedOutput : NSObject
+(void)initialize;
+(id)sharedSerialOutput;
-(id)serializeComposition:(id)arg1 containingAssetURLs:(id)arg2 ;
-(id)serializeVideoComposition:(id)arg1 ;
-(id)serializeAudioMix:(id)arg1 ;
-(void)exportSerializedToURL:(id)arg1 withComposition:(id)arg2 andVideoComposition:(id)arg3 andAudioMix:(id)arg4 ;
@end

