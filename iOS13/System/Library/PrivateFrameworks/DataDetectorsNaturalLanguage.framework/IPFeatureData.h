/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSMutableDictionary *)contextDictionary;
-(id)nGramMarker;
@end

