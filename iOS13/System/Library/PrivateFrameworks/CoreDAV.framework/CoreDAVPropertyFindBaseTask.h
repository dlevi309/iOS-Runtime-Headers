/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)additionalHeaderValues;
-(CoreDAVMultiStatusItem *)multiStatus;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(id)getTotalFailureError;
-(NSSet *)propertiesToFind;
-(void)updateMultiStatusFromResponse;
-(id)parseHints;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

