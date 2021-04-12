/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)state;
-(NSURL *)url;
-(int)action;
-(void)setState:(int)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAction:(int)arg1 ;
-(NSURL *)publishedURL;
-(void)setPublishedURL:(NSURL *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
@end

