/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	BOOL _fetchPrincipalDetails;
	int _state;

}

@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL fetchPrincipalDetails;              //@synthesize fetchPrincipalDetails=_fetchPrincipalDetails - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)_getChildProperties;
-(void)setFetchPrincipalDetails:(BOOL)arg1 ;
-(id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1 ;
-(BOOL)fetchPrincipalDetails;
-(void)_expandPropertiesWithAllowWrite:(BOOL)arg1 ;
-(void)_fetchOnlyHrefs;
@end

