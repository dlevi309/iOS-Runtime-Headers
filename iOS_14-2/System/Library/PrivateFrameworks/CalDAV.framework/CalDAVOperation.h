/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)cancelTaskGroup;
-(void)dealloc;
-(void)bailWithError:(id)arg1 ;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
@end

