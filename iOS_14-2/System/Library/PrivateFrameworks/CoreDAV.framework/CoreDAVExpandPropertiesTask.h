/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {

	NSMutableSet* _propertiesToExpand;

}

@property (nonatomic,retain) NSMutableSet * propertiesToExpand;              //@synthesize propertiesToExpand=_propertiesToExpand - In the implementation block
-(id)parseHints;
-(id)httpMethod;
-(id)description;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)setPropertiesToExpand:(NSMutableSet *)arg1 ;
-(void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSMutableSet *)propertiesToExpand;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4 ;
@end

