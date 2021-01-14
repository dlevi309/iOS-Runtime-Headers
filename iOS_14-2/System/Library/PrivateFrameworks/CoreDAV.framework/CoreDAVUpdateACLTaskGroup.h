/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVACLTaskDelegate.h>

@class NSSet, NSURL, CoreDAVPropFindTask, NSString;

@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVACLTaskDelegate> {

	int _state;
	NSSet* _aceItems;
	NSURL* _url;
	CoreDAVPropFindTask* _fetchTask;

}

@property (nonatomic,retain) NSSet * aceItems;                             //@synthesize aceItems=_aceItems - In the implementation block
@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;              //@synthesize fetchTask=_fetchTask - In the implementation block
@property (assign,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(void)startTaskGroup;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
-(void)_startGetACL;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(NSSet *)aceItems;
-(void)_startSetACLWithAccessControlEntities:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 aceItems:(id)arg2 url:(id)arg3 taskManager:(id)arg4 ;
-(void)setAceItems:(NSSet *)arg1 ;
@end

