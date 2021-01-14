/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

