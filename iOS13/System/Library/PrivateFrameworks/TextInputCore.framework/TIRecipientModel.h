/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol TILinguisticDataSourceMessage;
@class NSString, RKMessageResponseManager;

@interface TIRecipientModel : NSObject {

	NSString* _identifier;
	RKMessageResponseManager* _trainer;
	id<TILinguisticDataSourceMessage> _lastMessage;

}

@property (nonatomic,retain) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) RKMessageResponseManager * trainer;                         //@synthesize trainer=_trainer - In the implementation block
@property (nonatomic,retain) id<TILinguisticDataSourceMessage> lastMessage;              //@synthesize lastMessage=_lastMessage - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<TILinguisticDataSourceMessage>)lastMessage;
-(void)setLastMessage:(id<TILinguisticDataSourceMessage>)arg1 ;
-(id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2 ;
-(id)languageGuessForString:(id)arg1 ;
-(void)handleMessages:(id)arg1 ;
-(RKMessageResponseManager *)trainer;
-(void)setTrainer:(RKMessageResponseManager *)arg1 ;
@end

