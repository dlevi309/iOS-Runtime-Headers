/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPostTaskDelegate.h>

@class NSMutableSet, NSSet, NSURL, NSString;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	NSMutableSet* _invalidSharees;
	NSSet* _shareesToRemove;
	NSSet* _shareesToSet;
	NSURL* _calendarURL;
	NSString* _summary;

}

@property (nonatomic,retain) NSSet * shareesToRemove;                            //@synthesize shareesToRemove=_shareesToRemove - In the implementation block
@property (nonatomic,retain) NSSet * shareesToSet;                               //@synthesize shareesToSet=_shareesToSet - In the implementation block
@property (nonatomic,retain) NSURL * calendarURL;                                //@synthesize calendarURL=_calendarURL - In the implementation block
@property (nonatomic,retain) NSString * summary;                                 //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSMutableSet * invalidSharees;                      //@synthesize invalidSharees=_invalidSharees - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(NSURL *)calendarURL;
-(void)startTaskGroup;
-(void)setCalendarURL:(NSURL *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)setShareesToRemove:(NSSet *)arg1 ;
-(void)setShareesToSet:(NSSet *)arg1 ;
-(void)setInvalidSharees:(NSMutableSet *)arg1 ;
-(id)generateModificationMessageBody;
-(NSSet *)shareesToSet;
-(NSSet *)shareesToRemove;
-(NSMutableSet *)invalidSharees;
-(id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 ;
@end

