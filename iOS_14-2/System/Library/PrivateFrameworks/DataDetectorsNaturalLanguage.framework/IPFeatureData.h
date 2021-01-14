/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSMutableDictionary;

@interface IPFeatureData : IPFeature {

	NSMutableDictionary* _contextDictionary;
	unsigned long long _type;
	id _value;

}

@property (assign) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (readonly) NSMutableDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(id)featureDataWithType:(unsigned long long)arg1 value:(id)arg2 matchRange:(NSRange)arg3 ;
-(NSMutableDictionary *)contextDictionary;
-(void)setType:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)value;
-(id)nGramMarker;
@end

