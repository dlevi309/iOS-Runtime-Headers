/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

@class NSDate;


@protocol MessageItemViewModelBuilder <MessageItemFlagsViewModelBuilder>
@property (assign,getter=isBlockedSender,nonatomic) BOOL blockedSender; 
@property (assign,nonatomic) BOOL hasAttachments; 
@property (nonatomic,copy) NSDate * dateReceived; 
@required
-(void)setHasAttachments:(BOOL)arg1;
-(BOOL)hasAttachments;
-(void)setDateReceived:(id)arg1;
-(NSDate *)dateReceived;
-(BOOL)isBlockedSender;
-(void)setBlockedSender:(BOOL)arg1;

@end

