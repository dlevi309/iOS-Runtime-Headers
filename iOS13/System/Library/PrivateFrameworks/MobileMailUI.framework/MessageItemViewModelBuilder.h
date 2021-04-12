/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

@class NSDate;


@protocol MessageItemViewModelBuilder <MessageItemFlagsViewModelBuilder>
@property (assign,getter=isBlockedSender,nonatomic) BOOL blockedSender; 
@property (assign,nonatomic) BOOL hasAttachments; 
@property (nonatomic,copy) NSDate * dateReceived; 
@required
-(NSDate *)dateReceived;
-(void)setDateReceived:(id)arg1;
-(void)setHasAttachments:(BOOL)arg1;
-(BOOL)hasAttachments;
-(BOOL)isBlockedSender;
-(void)setBlockedSender:(BOOL)arg1;

@end

