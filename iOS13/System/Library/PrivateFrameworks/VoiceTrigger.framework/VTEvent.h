/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@class NSURL, NSDictionary;

@interface VTEvent : NSObject {

	NSURL* _jsonFileUrl;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (nonatomic,readonly) NSURL * jsonFileUrl;                               //@synthesize jsonFileUrl=_jsonFileUrl - In the implementation block
@property (nonatomic,readonly) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
+(id)eventFromURL:(id)arg1 ;
+(long long)eventTypeFromURL:(id)arg1 ;
-(NSDictionary *)voiceTriggerEventInfo;
-(id)timestampString;
-(id)_packNumberFomVTEventInfo:(id)arg1 key:(id)arg2 format:(id)arg3 ;
-(id)_buildTitle;
-(id)_buildContent;
-(id)_buildDetail;
-(id)_buildTriggerContent;
-(id)_packAudioURLFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(id)_packStringContent:(id)arg1 value:(id)arg2 ;
-(id)_buildTriggerDetail;
-(id)eventTrackerDictionary;
-(id)initWithEventLogURL:(id)arg1 ;
-(void)_readJsonFile:(id)arg1 ;
-(id)jsonFileName;
-(id)_packStringFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(id)_packAudioContent:(id)arg1 filepath:(id)arg2 ;
-(id)_packBooleanFromVTEventInfo:(id)arg1 key:(id)arg2 ;
-(NSURL *)jsonFileUrl;
@end

