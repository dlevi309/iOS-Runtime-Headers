/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

@class NSString;


@protocol ECTransferMessageActionItemBuilder <NSObject>
@property (nonatomic,copy) NSString * sourceRemoteID; 
@property (nonatomic,retain) id<ECMessage> sourceMessage; 
@property (nonatomic,retain) id<ECMessage> destinationMessage; 
@required
-(id<ECMessage>)destinationMessage;
-(NSString *)sourceRemoteID;
-(id<ECMessage>)sourceMessage;
-(void)setSourceRemoteID:(id)arg1;
-(void)setSourceMessage:(id)arg1;
-(void)setDestinationMessage:(id)arg1;

@end

