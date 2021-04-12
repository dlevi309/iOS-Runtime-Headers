/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSMutableSet, NSArray;

@interface NNMKDiffMessageResult : NSObject {

	BOOL _trimed;
	NSMutableSet* _messageIdsToAddToWatch;
	NSMutableSet* _messageIdsToUpdateOnWatch;
	NSMutableSet* _messageIdsToDeleteFromWatch;
	NSArray* _messageToAddToWatch;

}

@property (nonatomic,retain) NSMutableSet * messageIdsToAddToWatch;                   //@synthesize messageIdsToAddToWatch=_messageIdsToAddToWatch - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageIdsToUpdateOnWatch;                //@synthesize messageIdsToUpdateOnWatch=_messageIdsToUpdateOnWatch - In the implementation block
@property (nonatomic,retain) NSMutableSet * messageIdsToDeleteFromWatch;              //@synthesize messageIdsToDeleteFromWatch=_messageIdsToDeleteFromWatch - In the implementation block
@property (nonatomic,retain) NSArray * messageToAddToWatch;                           //@synthesize messageToAddToWatch=_messageToAddToWatch - In the implementation block
@property (assign,nonatomic) BOOL trimed;                                             //@synthesize trimed=_trimed - In the implementation block
-(BOOL)trimed;
-(NSArray *)messageToAddToWatch;
-(NSMutableSet *)messageIdsToAddToWatch;
-(NSMutableSet *)messageIdsToUpdateOnWatch;
-(NSMutableSet *)messageIdsToDeleteFromWatch;
-(void)setMessageIdsToAddToWatch:(NSMutableSet *)arg1 ;
-(void)setMessageIdsToUpdateOnWatch:(NSMutableSet *)arg1 ;
-(void)setMessageIdsToDeleteFromWatch:(NSMutableSet *)arg1 ;
-(void)setMessageToAddToWatch:(NSArray *)arg1 ;
-(void)setTrimed:(BOOL)arg1 ;
@end

