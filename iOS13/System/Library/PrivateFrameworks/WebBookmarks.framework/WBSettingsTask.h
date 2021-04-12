/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
*/


@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject {

	long long _taskType;
	WBWebsiteDataRecord* _websiteDataRecord;

}

@property (nonatomic,readonly) long long taskType;                                   //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) WBWebsiteDataRecord * websiteDataRecord;              //@synthesize websiteDataRecord=_websiteDataRecord - In the implementation block
+(id)taskWithType:(long long)arg1 ;
+(id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1 ;
-(long long)taskType;
-(id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2 ;
-(WBWebsiteDataRecord *)websiteDataRecord;
@end

