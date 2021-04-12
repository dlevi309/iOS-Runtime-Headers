/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)typeDescription;
-(NSString *)keywordString;
-(void)setKeywordString:(NSString *)arg1 ;
-(NSMutableDictionary *)contextDictionary;
-(NSArray *)eventTypes;
-(void)addEventType:(id)arg1 ;
-(void)setEventTypes:(NSArray *)arg1 ;
-(id)humandReadableEventTypes;
@end

