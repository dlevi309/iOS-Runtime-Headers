/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)_proppatchAfterFailureCount:(unsigned long long)arg1 ;
-(CoreDAVResponseItem *)responseItem;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
@end

