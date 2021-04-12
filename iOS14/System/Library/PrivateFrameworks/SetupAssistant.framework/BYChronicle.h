/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@class NSMutableDictionary;

@interface BYChronicle : NSObject {

	NSMutableDictionary* _featureEntries;

}

@property (nonatomic,retain) NSMutableDictionary * featureEntries;              //@synthesize featureEntries=_featureEntries - In the implementation block
-(id)dictionaryRepresentation;
-(id)init;
-(void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2 ;
-(NSMutableDictionary *)featureEntries;
-(void)recordFeatureShown:(unsigned long long)arg1 ;
-(id)entryForFeature:(unsigned long long)arg1 ;
-(void)setFeatureEntries:(NSMutableDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

