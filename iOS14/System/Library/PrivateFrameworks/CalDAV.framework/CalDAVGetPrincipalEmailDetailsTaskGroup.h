/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVTaskDelegate.h>

@class NSURL, CalDAVPrincipalEmailDetailsResult, NSString, NSSet;

@interface CalDAVGetPrincipalEmailDetailsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _principalURL;
	CalDAVPrincipalEmailDetailsResult* _principalResult;

}

@property (nonatomic,retain) CalDAVPrincipalEmailDetailsResult * principalResult;              //@synthesize principalResult=_principalResult - In the implementation block
@property (nonatomic,retain) NSURL * principalURL;                                             //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain,readonly) NSSet * addresses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)addresses;
-(void)_finishWithError:(id)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSURL *)principalURL;
-(void)startTaskGroup;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(NSString *)displayName;
-(CalDAVPrincipalEmailDetailsResult *)principalResult;
-(void)setPrincipalResult:(CalDAVPrincipalEmailDetailsResult *)arg1 ;
-(void)_processPropFind:(id)arg1 ;
@end

