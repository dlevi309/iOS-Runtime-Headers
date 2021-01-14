/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropFindTaskDelegate.h>

@class NSSet, NSURL, NSString;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate> {

	NSSet* _sharees;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSSet * sharees;                       //@synthesize sharees=_sharees - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)sharees;
-(NSURL *)url;
-(void)startTaskGroup;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSharees:(NSSet *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(id)initWithCalendarURL:(id)arg1 accountInfoProvider:(id)arg2 taskManager:(id)arg3 ;
@end

