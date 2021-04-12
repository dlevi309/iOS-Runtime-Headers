/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/RTSource.h>

@class NSString, NSDate, NSDictionary;

@interface RTSourceEventKit : RTSource {

	BOOL _allDay;
	NSString* _eventIdentifier;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _title;
	NSString* _location;
	NSString* _suggestionInfo_opaqueKey;
	NSDictionary* _suggestionsSchemaOrg;
	unsigned long long _sharingStatus;

}

@property (nonatomic,readonly) NSString * eventIdentifier;                       //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * location;                              //@synthesize location=_location - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) NSString * suggestionInfo_opaqueKey;              //@synthesize suggestionInfo_opaqueKey=_suggestionInfo_opaqueKey - In the implementation block
@property (nonatomic,readonly) NSDictionary * suggestionsSchemaOrg;              //@synthesize suggestionsSchemaOrg=_suggestionsSchemaOrg - In the implementation block
@property (nonatomic,readonly) unsigned long long sharingStatus;                 //@synthesize sharingStatus=_sharingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharingStatusToString:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)title;
-(NSString *)location;
-(BOOL)isAllDay;
-(NSString *)eventIdentifier;
-(unsigned long long)sharingStatus;
-(id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(BOOL)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8 suggestionsSchemaOrg:(id)arg9 ;
-(NSDictionary *)suggestionsSchemaOrg;
-(id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(BOOL)arg6 sharingStatus:(unsigned long long)arg7 ;
-(id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(BOOL)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8 ;
-(NSString *)suggestionInfo_opaqueKey;
@end

