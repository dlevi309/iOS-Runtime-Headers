/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {

	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	BOOL _moreToSync;
	BOOL _wasInvalidSyncToken;

}

@property (nonatomic,readonly) NSString * nextSyncToken;              //@synthesize nextSyncToken=_nextSyncToken - In the implementation block
@property (nonatomic,readonly) BOOL moreToSync;                       //@synthesize moreToSync=_moreToSync - In the implementation block
@property (nonatomic,readonly) BOOL wasInvalidSyncToken;              //@synthesize wasInvalidSyncToken=_wasInvalidSyncToken - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4 ;
-(BOOL)wasInvalidSyncToken;
-(id)notFoundHREFs;
-(BOOL)moreToSync;
-(NSString *)nextSyncToken;
@end

