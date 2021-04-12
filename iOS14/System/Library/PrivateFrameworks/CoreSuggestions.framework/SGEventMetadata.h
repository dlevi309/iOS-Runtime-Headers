/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)eventMetadataFromEKEvent:(id)arg1 ;
+(id)describeType:(unsigned char)arg1 ;
+(unsigned char)eventTypeFromString:(id)arg1 ;
-(double)confidence;
-(NSString *)categoryDescription;
-(NSArray *)participants;
-(id)jsonObject;
-(unsigned char)type;
-(id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6 ;
-(id)toJsonString;
-(NSString *)originBundleId;
-(NSArray *)eventActivities;
-(id)initWithType:(unsigned char)arg1 categoryDescription:(id)arg2 originBundleId:(id)arg3 confidence:(double)arg4 schemaOrg:(id)arg5 participants:(id)arg6 eventActivities:(id)arg7 ;
-(NSArray *)schemaOrg;
@end

