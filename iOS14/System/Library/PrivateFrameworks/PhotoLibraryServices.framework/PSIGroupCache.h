/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PSIGroupCacheDelegate;
@class NSMutableSet;

@interface PSIGroupCache : NSObject {

	NSMutableSet* _groups;
	id<PSIGroupCacheDelegate> _delegate;
	unsigned long long _numberOfGroupsChecked;
	unsigned long long _numberOfGroupsQueried;

}

@property (readonly) unsigned long long numberOfGroupsChecked;              //@synthesize numberOfGroupsChecked=_numberOfGroupsChecked - In the implementation block
@property (readonly) unsigned long long numberOfGroupsQueried;              //@synthesize numberOfGroupsQueried=_numberOfGroupsQueried - In the implementation block
-(unsigned long long)numberOfGroupsQueried;
-(unsigned long long)numberOfGroupsChecked;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned long long)idOfGroupWithText:(id)arg1 identifier:(id)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4 didUpdateGroup:(out BOOL*)arg5 ;
@end

