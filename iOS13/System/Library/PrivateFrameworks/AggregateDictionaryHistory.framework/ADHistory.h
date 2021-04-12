/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AggregateDictionaryHistory.framework/AggregateDictionaryHistory
*/


#import <AggregateDictionaryHistory/AggregateDictionaryHistory-Structs.h>
@class NSString;

@interface ADHistory : NSObject {

	Database* _database;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(id)initWithDefaultPath;
-(BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
-(BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(int)arg2 maxDaysSince1970:(int)arg3 rowHandler:(/*^block*/id)arg4 ;
@end

