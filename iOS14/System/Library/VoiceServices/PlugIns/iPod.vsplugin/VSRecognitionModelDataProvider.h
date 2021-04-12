/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
*/


@protocol VSRecognitionModelDataProvider <NSObject>
@optional
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(id)valueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(BOOL)getValue:(id*)arg1 weight:(long long*)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5;
-(id)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(id)cacheValidityIdentifier;
-(BOOL)isCacheValidityIdentifierValid:(id)arg1;

@required
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2;

@end

