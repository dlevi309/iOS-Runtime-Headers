/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding> {

	BOOL _includeListNames;
	BOOL _includeReminderTitles;
	BOOL _includeListNameFuzzedEmbeddings;
	BOOL _includeReminderTitleFuzzedEmbeddings;
	BOOL _includeSystemLanguage;
	BOOL _includeSystemTimezone;
	BOOL _includeAccountType;
	BOOL _includeListGroupInfo;
	BOOL _includeReminderTitleSaltedHash;
	BOOL _includeDates;
	BOOL _includeDayOfWeek;
	BOOL _includeRecurrenceInfo;
	BOOL _includeLocationInfo;
	BOOL _includeAttachmentUTIs;
	BOOL _includeRemindMeWhenMessagingInfo;
	BOOL _includeAlarmDates;
	BOOL _includeSubtaskInfo;
	BOOL _includeUserActivityInfo;
	BOOL _includeIsFlagged;
	BOOL _includePriority;
	BOOL _relevantWordTagsIncludeOtherWord;
	BOOL _includeReminderTitleCategoryClosestWord;
	BOOL _includeReminderTitleCategoryIntentionalWord;
	BOOL _includeReminderTitleCategorySentenceAverage;
	double _reminderTitleCategoryDistanceTolerance;
	NSURL* _reminderTitleCategoryEmbeddingURL;
	unsigned long long _dateResolutionInSeconds;
	unsigned long long _creationDateWithinDays;

}

@property (assign,nonatomic) BOOL includeListNames;                                         //@synthesize includeListNames=_includeListNames - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitles;                                    //@synthesize includeReminderTitles=_includeReminderTitles - In the implementation block
@property (assign,nonatomic) BOOL includeListNameFuzzedEmbeddings;                          //@synthesize includeListNameFuzzedEmbeddings=_includeListNameFuzzedEmbeddings - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitleFuzzedEmbeddings;                     //@synthesize includeReminderTitleFuzzedEmbeddings=_includeReminderTitleFuzzedEmbeddings - In the implementation block
@property (assign,nonatomic) BOOL includeSystemLanguage;                                    //@synthesize includeSystemLanguage=_includeSystemLanguage - In the implementation block
@property (assign,nonatomic) BOOL includeSystemTimezone;                                    //@synthesize includeSystemTimezone=_includeSystemTimezone - In the implementation block
@property (assign,nonatomic) BOOL includeAccountType;                                       //@synthesize includeAccountType=_includeAccountType - In the implementation block
@property (assign,nonatomic) BOOL includeListGroupInfo;                                     //@synthesize includeListGroupInfo=_includeListGroupInfo - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitleSaltedHash;                           //@synthesize includeReminderTitleSaltedHash=_includeReminderTitleSaltedHash - In the implementation block
@property (assign,nonatomic) BOOL includeDates;                                             //@synthesize includeDates=_includeDates - In the implementation block
@property (assign,nonatomic) BOOL includeDayOfWeek;                                         //@synthesize includeDayOfWeek=_includeDayOfWeek - In the implementation block
@property (assign,nonatomic) BOOL includeRecurrenceInfo;                                    //@synthesize includeRecurrenceInfo=_includeRecurrenceInfo - In the implementation block
@property (assign,nonatomic) BOOL includeLocationInfo;                                      //@synthesize includeLocationInfo=_includeLocationInfo - In the implementation block
@property (assign,nonatomic) BOOL includeAttachmentUTIs;                                    //@synthesize includeAttachmentUTIs=_includeAttachmentUTIs - In the implementation block
@property (assign,nonatomic) BOOL includeRemindMeWhenMessagingInfo;                         //@synthesize includeRemindMeWhenMessagingInfo=_includeRemindMeWhenMessagingInfo - In the implementation block
@property (assign,nonatomic) BOOL includeAlarmDates;                                        //@synthesize includeAlarmDates=_includeAlarmDates - In the implementation block
@property (assign,nonatomic) BOOL includeSubtaskInfo;                                       //@synthesize includeSubtaskInfo=_includeSubtaskInfo - In the implementation block
@property (assign,nonatomic) BOOL includeUserActivityInfo;                                  //@synthesize includeUserActivityInfo=_includeUserActivityInfo - In the implementation block
@property (assign,nonatomic) BOOL includeIsFlagged;                                         //@synthesize includeIsFlagged=_includeIsFlagged - In the implementation block
@property (assign,nonatomic) BOOL includePriority;                                          //@synthesize includePriority=_includePriority - In the implementation block
@property (assign,nonatomic) BOOL relevantWordTagsIncludeOtherWord;                         //@synthesize relevantWordTagsIncludeOtherWord=_relevantWordTagsIncludeOtherWord - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitleCategoryClosestWord;                  //@synthesize includeReminderTitleCategoryClosestWord=_includeReminderTitleCategoryClosestWord - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitleCategoryIntentionalWord;              //@synthesize includeReminderTitleCategoryIntentionalWord=_includeReminderTitleCategoryIntentionalWord - In the implementation block
@property (assign,nonatomic) BOOL includeReminderTitleCategorySentenceAverage;              //@synthesize includeReminderTitleCategorySentenceAverage=_includeReminderTitleCategorySentenceAverage - In the implementation block
@property (assign,nonatomic) double reminderTitleCategoryDistanceTolerance;                 //@synthesize reminderTitleCategoryDistanceTolerance=_reminderTitleCategoryDistanceTolerance - In the implementation block
@property (nonatomic,retain) NSURL * reminderTitleCategoryEmbeddingURL;                     //@synthesize reminderTitleCategoryEmbeddingURL=_reminderTitleCategoryEmbeddingURL - In the implementation block
@property (assign,nonatomic) unsigned long long dateResolutionInSeconds;                    //@synthesize dateResolutionInSeconds=_dateResolutionInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long creationDateWithinDays;                     //@synthesize creationDateWithinDays=_creationDateWithinDays - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_attachmentURLFromFilenameWithKey:(id)arg1 inJSONRepresentation:(id)arg2 attachmentURLs:(id)arg3 error:(id*)arg4 ;
+(id)optionsWithDefaultValues;
+(id)optionsWithEverythingOff;
+(id)optionsFromJSONRepresentation:(id)arg1 attachmentURLs:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setIncludeListNames:(BOOL)arg1 ;
-(void)setIncludeReminderTitles:(BOOL)arg1 ;
-(void)setIncludeListNameFuzzedEmbeddings:(BOOL)arg1 ;
-(void)setIncludeReminderTitleFuzzedEmbeddings:(BOOL)arg1 ;
-(void)setIncludeSystemLanguage:(BOOL)arg1 ;
-(void)setIncludeSystemTimezone:(BOOL)arg1 ;
-(void)setIncludeAccountType:(BOOL)arg1 ;
-(void)setIncludeListGroupInfo:(BOOL)arg1 ;
-(void)setIncludeReminderTitleSaltedHash:(BOOL)arg1 ;
-(void)setIncludeDayOfWeek:(BOOL)arg1 ;
-(void)setIncludeDates:(BOOL)arg1 ;
-(void)setIncludeRecurrenceInfo:(BOOL)arg1 ;
-(void)setIncludeLocationInfo:(BOOL)arg1 ;
-(void)setIncludeAttachmentUTIs:(BOOL)arg1 ;
-(void)setIncludeRemindMeWhenMessagingInfo:(BOOL)arg1 ;
-(void)setIncludeAlarmDates:(BOOL)arg1 ;
-(void)setIncludeSubtaskInfo:(BOOL)arg1 ;
-(void)setIncludeUserActivityInfo:(BOOL)arg1 ;
-(void)setIncludeIsFlagged:(BOOL)arg1 ;
-(void)setIncludePriority:(BOOL)arg1 ;
-(void)setRelevantWordTagsIncludeOtherWord:(BOOL)arg1 ;
-(void)setDateResolutionInSeconds:(unsigned long long)arg1 ;
-(void)setCreationDateWithinDays:(unsigned long long)arg1 ;
-(void)setReminderTitleCategoryEmbeddingURL:(NSURL *)arg1 ;
-(void)setIncludeReminderTitleCategoryClosestWord:(BOOL)arg1 ;
-(void)setIncludeReminderTitleCategoryIntentionalWord:(BOOL)arg1 ;
-(void)setIncludeReminderTitleCategorySentenceAverage:(BOOL)arg1 ;
-(void)setReminderTitleCategoryDistanceTolerance:(double)arg1 ;
-(BOOL)includeListNames;
-(BOOL)includeListNameFuzzedEmbeddings;
-(BOOL)includeReminderTitles;
-(BOOL)includeReminderTitleFuzzedEmbeddings;
-(BOOL)includeSystemLanguage;
-(BOOL)includeSystemTimezone;
-(BOOL)includeAccountType;
-(BOOL)includeListGroupInfo;
-(BOOL)includeReminderTitleSaltedHash;
-(BOOL)includeDates;
-(BOOL)includeRecurrenceInfo;
-(BOOL)includeLocationInfo;
-(BOOL)includeAttachmentUTIs;
-(BOOL)includeRemindMeWhenMessagingInfo;
-(BOOL)includeAlarmDates;
-(BOOL)includeSubtaskInfo;
-(BOOL)includeUserActivityInfo;
-(BOOL)includeIsFlagged;
-(BOOL)includePriority;
-(BOOL)relevantWordTagsIncludeOtherWord;
-(BOOL)includeReminderTitleCategoryClosestWord;
-(BOOL)includeReminderTitleCategoryIntentionalWord;
-(BOOL)includeReminderTitleCategorySentenceAverage;
-(unsigned long long)dateResolutionInSeconds;
-(NSURL *)reminderTitleCategoryEmbeddingURL;
-(double)reminderTitleCategoryDistanceTolerance;
-(BOOL)includeDayOfWeek;
-(unsigned long long)creationDateWithinDays;
@end

