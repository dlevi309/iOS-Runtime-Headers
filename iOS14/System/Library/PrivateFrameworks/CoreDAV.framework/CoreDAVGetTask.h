/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	BOOL _forceNoCache;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                         //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) BOOL forceNoCache;                                    //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(id)httpMethod;
-(id)description;
-(unsigned long long)cachePolicy;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)appSpecificDataItemResult;
-(BOOL)forceNoCache;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(void)setForceNoCache:(BOOL)arg1 ;
@end

