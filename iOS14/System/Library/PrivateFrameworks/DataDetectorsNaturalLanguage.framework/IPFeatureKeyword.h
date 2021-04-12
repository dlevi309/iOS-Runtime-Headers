/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSMutableDictionary, NSString, NSArray;

@interface IPFeatureKeyword : IPFeature {

	NSMutableDictionary* _contextDictionary;
	NSString* _keywordString;
	NSArray* _eventTypes;
	unsigned long long _type;

}

@property (retain) NSString * keywordString;                               //@synthesize keywordString=_keywordString - In the implementation block
@property (nonatomic,retain) NSArray * eventTypes;                         //@synthesize eventTypes=_eventTypes - In the implementation block
@property (assign) unsigned long long type;                                //@synthesize type=_type - In the implementation block
@property (readonly) NSMutableDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
+(id)featureKeywordWithType:(unsigned long long)arg1 string:(id)arg2 matchRange:(NSRange)arg3 ;
-(NSMutableDictionary *)contextDictionary;
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)keywordString;
-(void)setKeywordString:(NSString *)arg1 ;
-(unsigned long long)type;
-(id)typeDescription;
-(void)setEventTypes:(NSArray *)arg1 ;
-(NSArray *)eventTypes;
-(void)addEventType:(id)arg1 ;
-(id)humandReadableEventTypes;
@end

