/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
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

