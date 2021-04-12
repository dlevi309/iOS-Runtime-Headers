/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVContainerMultiGetTask.h>

@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask {

	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;

}

@property (assign,nonatomic) BOOL getScheduleTags;                 //@synthesize getScheduleTags=_getScheduleTags - In the implementation block
@property (assign,nonatomic) BOOL getScheduleChanges;              //@synthesize getScheduleChanges=_getScheduleChanges - In the implementation block
-(void)setGetScheduleTags:(BOOL)arg1 ;
-(void)setGetScheduleChanges:(BOOL)arg1 ;
-(BOOL)getScheduleTags;
-(BOOL)getScheduleChanges;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 appSpecificCalendarItemClass:(Class)arg5 ;
-(id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 getScheduleTags:(BOOL)arg3 getScheduleChanges:(BOOL)arg4 ;
-(id)copyAdditionalPropElements;
-(void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2 ;
@end

