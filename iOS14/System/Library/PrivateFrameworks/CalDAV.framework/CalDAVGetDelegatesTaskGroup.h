/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	NSMutableArray* _nestedGroupPrincipalURLs;

}

@property (assign,nonatomic) int state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * nestedGroupPrincipalURLs;              //@synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs - In the implementation block
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(int)state;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)setNestedGroupPrincipalURLs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nestedGroupPrincipalURLs;
-(void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2 ;
-(void)_expandProperties;
-(void)_getChildProperties;
@end

