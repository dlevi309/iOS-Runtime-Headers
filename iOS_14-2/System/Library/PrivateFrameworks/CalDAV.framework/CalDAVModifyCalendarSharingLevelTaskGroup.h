/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	int _action;
	int _state;
	NSURL* _publishedURL;
	NSURL* _url;

}

@property (assign,nonatomic) int action;                            //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * publishedURL;                  //@synthesize publishedURL=_publishedURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)action;
-(void)setAction:(int)arg1 ;
-(NSURL *)url;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(void)startTaskGroup;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)finishWithError:(id)arg1 ;
-(NSURL *)publishedURL;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
@end

