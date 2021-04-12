/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/

#import <CalDAV/CalDAVOperation.h>

@protocol CalDAVAccountDelegatesRefreshDelegate;
@interface CalDAVAccountDelegatesRefreshOperation : CalDAVOperation {

	id<CalDAVAccountDelegatesRefreshDelegate> _mdelegate;

}

@property (assign,nonatomic) id<CalDAVAccountDelegatesRefreshDelegate> mdelegate;              //@synthesize mdelegate=_mdelegate - In the implementation block
-(void)setMdelegate:(id<CalDAVAccountDelegatesRefreshDelegate>)arg1 ;
-(void)refreshDelegates;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id<CalDAVAccountDelegatesRefreshDelegate>)mdelegate;
@end

