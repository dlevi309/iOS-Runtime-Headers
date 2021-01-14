/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, CoreDAVXMLData, NSMutableDictionary, NSDictionary;

@interface CoreDAVMultiPutTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSString* _checkCTag;
	CoreDAVXMLData* _pushedData;
	BOOL _validCTag;
	NSString* _nextCTag;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (nonatomic,readonly) NSString * nextCTag;                          //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                    //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                    //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                  //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                  //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;              //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;              //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
-(id)additionalHeaderValues;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(NSString *)nextCTag;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 ;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
@end

