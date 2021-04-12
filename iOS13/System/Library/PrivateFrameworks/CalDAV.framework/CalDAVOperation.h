/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancelTaskGroup;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
-(void)bailWithError:(id)arg1 ;
@end

