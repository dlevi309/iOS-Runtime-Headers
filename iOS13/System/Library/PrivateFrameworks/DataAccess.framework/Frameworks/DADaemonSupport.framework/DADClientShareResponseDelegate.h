/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADClientShareResponseDelegate : DADClientDelegate <DAEventsCalendarSharingResponseConsumer> {

	NSString* _calendarID;
	NSString* _shareID;

}

@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(void)setCalendarID:(NSString *)arg1 ;
-(void)_doResponseWithBlock:(/*^block*/id)arg1 ;
-(void)respondToShareRequestWithResponse:(long long)arg1 ;
-(void)reportAsJunk;
-(id)initWithAccountID:(id)arg1 client:(id)arg2 calendarID:(id)arg3 ;
@end

