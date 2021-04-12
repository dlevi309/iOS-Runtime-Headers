/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NPKPassSyncChange, NSDate;

@interface NPKPassSyncServiceSyncStatus : NSObject {

	NPKPassSyncChange* _lastKnownOutgoingChange;
	NSDate* _outgoingChangeDate;
	NPKPassSyncChange* _lastKnownIncomingChange;
	NSDate* _incomingChangeDate;

}

@property (nonatomic,retain) NPKPassSyncChange * lastKnownOutgoingChange;              //@synthesize lastKnownOutgoingChange=_lastKnownOutgoingChange - In the implementation block
@property (nonatomic,retain) NSDate * outgoingChangeDate;                              //@synthesize outgoingChangeDate=_outgoingChangeDate - In the implementation block
@property (nonatomic,retain) NPKPassSyncChange * lastKnownIncomingChange;              //@synthesize lastKnownIncomingChange=_lastKnownIncomingChange - In the implementation block
@property (nonatomic,retain) NSDate * incomingChangeDate;                              //@synthesize incomingChangeDate=_incomingChangeDate - In the implementation block
-(void)reset;
-(BOOL)shouldSyncWithCurrentIncomingChange:(id)arg1 currentOutgoingChange:(id)arg2 currentDate:(id)arg3 ;
-(NPKPassSyncChange *)lastKnownOutgoingChange;
-(void)setLastKnownOutgoingChange:(NPKPassSyncChange *)arg1 ;
-(NSDate *)outgoingChangeDate;
-(void)setOutgoingChangeDate:(NSDate *)arg1 ;
-(NPKPassSyncChange *)lastKnownIncomingChange;
-(void)setLastKnownIncomingChange:(NPKPassSyncChange *)arg1 ;
-(NSDate *)incomingChangeDate;
-(void)setIncomingChangeDate:(NSDate *)arg1 ;
@end

