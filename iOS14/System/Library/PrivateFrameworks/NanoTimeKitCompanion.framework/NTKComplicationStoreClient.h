/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationStoreClient <NSObject>
@required
-(void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg1 complicationDescriptors:(id)arg2 seqId:(id)arg3;
-(void)updateLocalizableSampleTemplate:(id)arg1 forClientIdentifier:(id)arg2 descriptor:(id)arg3 family:(long long)arg4 seqId:(id)arg5;
-(void)updateComplicationDescriptors:(id)arg1 forClientIdentifier:(id)arg2 seqId:(id)arg3;
-(void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg1 descriptor:(id)arg2 seqId:(id)arg3;

@end

