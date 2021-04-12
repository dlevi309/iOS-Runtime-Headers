/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, NSDictionary, NSData, NSMutableSet, NSSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSDictionary* _uuidsToAddActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSString* _checkCTag;
	BOOL _simple;
	BOOL _returnChangedData;
	NSData* _pushedData;
	BOOL _validCTag;
	NSString* _nextCTag;
	NSMutableSet* _bulkChangeResponses;
	NSString* _requestDataContentType;

}

@property (nonatomic,readonly) NSDictionary * uuidsToAddActions;                    //@synthesize uuidsToAddActions=_uuidsToAddActions - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions;              //@synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions - In the implementation block
@property (nonatomic,readonly) NSString * nextCTag;                                 //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSSet * bulkChangeResponses;                         //@synthesize bulkChangeResponses=_bulkChangeResponses - In the implementation block
-(id)httpMethod;
-(id)requestBody;
-(id)additionalHeaderValues;
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
-(NSString *)nextCTag;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(BOOL)arg3 returnChangedData:(BOOL)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6 ;
-(NSSet *)bulkChangeResponses;
@end

