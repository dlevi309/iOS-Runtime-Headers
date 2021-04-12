/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)engagementWithNonSuggestionWithEngagementIdentifier:(id)arg1 ;
+(id)engagementWithSuggestion:(id)arg1 transportBundleID:(id)arg2 ;
+(id)abandonment;
-(long long)type;
-(NSString *)transportBundleID;
-(_PSSuggestion *)suggestion;
-(id)initWithType:(long long)arg1 suggestion:(id)arg2 transportBundleID:(id)arg3 ;
@end

