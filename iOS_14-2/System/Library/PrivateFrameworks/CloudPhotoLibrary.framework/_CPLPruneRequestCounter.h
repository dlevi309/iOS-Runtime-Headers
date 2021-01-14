/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSCountedSet, NSDate, NSString, NSDictionary;

@interface _CPLPruneRequestCounter : NSObject {

	NSCountedSet* _successStatsPerResourceType;
	NSCountedSet* _failedStatsPerResourceType;
	unsigned long long _successSize;
	NSDate* _lastRequestDate;
	NSString* _title;
	NSString* _statusKey;

}

@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * statusKey;                         //@synthesize statusKey=_statusKey - In the implementation block
@property (nonatomic,readonly) NSString * status; 
@property (nonatomic,readonly) NSDictionary * statusDictionary; 
-(NSString *)title;
-(NSString *)status;
-(NSDictionary *)statusDictionary;
-(void)noteRequestForResource:(id)arg1 successful:(BOOL)arg2 prunedSize:(unsigned long long)arg3 ;
-(NSString *)statusKey;
-(id)initWithTitle:(id)arg1 statusKey:(id)arg2 ;
@end

