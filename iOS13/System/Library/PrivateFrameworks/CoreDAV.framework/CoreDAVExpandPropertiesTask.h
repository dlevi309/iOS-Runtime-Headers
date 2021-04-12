/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {

	NSMutableSet* _propertiesToExpand;

}

@property (nonatomic,retain) NSMutableSet * propertiesToExpand;              //@synthesize propertiesToExpand=_propertiesToExpand - In the implementation block
-(id)description;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 expandedName:(id)arg3 expandedNameSpace:(id)arg4 ;
-(void)addPropertyToExpandWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(id)parseHints;
-(void)setPropertiesToExpand:(NSMutableSet *)arg1 ;
-(NSMutableSet *)propertiesToExpand;
@end

