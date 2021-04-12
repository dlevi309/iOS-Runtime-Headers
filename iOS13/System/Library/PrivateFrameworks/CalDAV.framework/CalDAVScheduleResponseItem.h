/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {

	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;

}

@property (nonatomic,retain) NSMutableSet * responses;                        //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulICS;                    //@synthesize successfulICS=_successfulICS - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedResponseItems;              //@synthesize failedResponseItems=_failedResponseItems - In the implementation block
-(id)description;
-(NSMutableSet *)responses;
-(void)setResponses:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addNewTopLevelItem:(id)arg1 ;
-(NSMutableSet *)successfulICS;
-(void)setSuccessfulICS:(NSMutableSet *)arg1 ;
-(NSMutableSet *)failedResponseItems;
-(void)setFailedResponseItems:(NSMutableSet *)arg1 ;
@end

