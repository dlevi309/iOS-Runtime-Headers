/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@class NSString, NSArray;

@interface SGEventMetadata : NSObject {

	unsigned char _type;
	NSString* _categoryDescription;
	NSString* _originBundleId;
	double _confidence;
	NSArray* _schemaOrg;
	NSArray* _participants;
	NSArray* _eventActivities;

}

@property (nonatomic,readonly) unsigned char type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * categoryDescription;              //@synthesize categoryDescription=_categoryDescription - In the implementation block
@property (nonatomic,readonly) NSString * originBundleId;                   //@synthesize originBundleId=_originBundleId - In the implementation block
@property (nonatomic,readonly) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSArray * schemaOrg;                         //@synthesize schemaOrg=_schemaOrg - In the implementation block
@property (nonatomic,readonly) NSArray * participants;                      //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) NSArray * eventActivities;                   //@synthesize eventActivities=_eventActivities - In the implementation block
+(id)describeType:(unsigned char)arg1 ;
+(id)eventMetadataFromEKEvent:(id)arg1 ;
+(unsigned char)eventTypeFromString:(id)arg1 ;
-(unsigned char)type;
-(double)confidence;
-(id)jsonObject;
-(NSArray *)participants;
-(id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6 ;
-(id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6 eventActivities:(id)arg7 ;
-(id)toJsonString;
-(NSString *)categoryDescription;
-(NSString *)originBundleId;
-(NSArray *)schemaOrg;
-(NSArray *)eventActivities;
@end

