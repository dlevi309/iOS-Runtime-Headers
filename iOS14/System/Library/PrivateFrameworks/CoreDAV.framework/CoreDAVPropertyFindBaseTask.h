/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {

	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                          //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) CoreDAVMultiStatusItem * multiStatus;              //@synthesize multiStatus=_multiStatus - In the implementation block
-(id)parseHints;
-(CoreDAVMultiStatusItem *)multiStatus;
-(id)additionalHeaderValues;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(NSSet *)propertiesToFind;
-(void)updateMultiStatusFromResponse;
-(id)getTotalFailureError;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

