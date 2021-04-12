/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DADREMXPCPerformerDelegate.h>
#import <DADaemonSupport/DAEventsCalendarSharingResponseConsumer.h>

@class NSString;

@interface DADREMShareResponseDelegate : DADREMXPCPerformerDelegate <DAEventsCalendarSharingResponseConsumer> {

	NSString* _calendarID;
	NSString* _shareID;

}

@property (nonatomic,retain) NSString * calendarID;                 //@synthesize calendarID=_calendarID - In the implementation block
@property (nonatomic,retain) NSString * shareID;                    //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(NSString *)shareID;
-(void)setShareID:(NSString *)arg1 ;
-(NSString *)calendarID;
-(void)shareResponseFinishedWithError:(id)arg1 ;
-(void)setCalendarID:(NSString *)arg1 ;
-(void)_doResponseWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAccountID:(id)arg1 calendarID:(id)arg2 ;
-(void)respondToShareRequestWithResponse:(long long)arg1 ;
-(void)reportAsJunk;
@end

