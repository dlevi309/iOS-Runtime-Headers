/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@interface VSDownloadService : NSObject {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)inProgressDownloadVoiceKeys;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)cancelDownloadForAssets:(id)arg1 ;
-(void)updateVoicesAndVoiceResources;
-(void)updateVoiceIfNeeded:(id)arg1 ;
-(void)updateVoiceResourcesIfNeeded:(id)arg1 ;
@end

