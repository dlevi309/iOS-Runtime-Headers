/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _PSSuggestion, NSString;

@interface _PSFeedbackAction : NSObject {

	long long _type;
	_PSSuggestion* _suggestion;
	NSString* _transportBundleID;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) _PSSuggestion * suggestion;                     //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * transportBundleID;              //@synthesize transportBundleID=_transportBundleID - In the implementation block
+(id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2 ;
+(id)abandonment;
+(id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1 ;
-(_PSSuggestion *)suggestion;
-(long long)type;
-(id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3 ;
-(NSString *)transportBundleID;
@end

