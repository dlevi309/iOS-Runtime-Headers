/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	CoreDAVResponseItem* _responseItem;

}

@property (nonatomic,retain) CoreDAVResponseItem * responseItem;              //@synthesize responseItem=_responseItem - In the implementation block
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(void)startTaskGroup;
-(CoreDAVResponseItem *)responseItem;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)_proppatchAfterFailureCount:(unsigned long long)arg1 ;
@end

