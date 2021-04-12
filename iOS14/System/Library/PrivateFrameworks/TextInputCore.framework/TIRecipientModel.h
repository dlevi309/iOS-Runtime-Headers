/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLastMessage:(id<TILinguisticDataSourceMessage>)arg1 ;
-(RKMessageResponseManager *)trainer;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id<TILinguisticDataSourceMessage>)lastMessage;
-(id)initWithCompositeName:(id)arg1 andTrainer:(id)arg2 ;
-(id)languageGuessForString:(id)arg1 ;
-(void)handleMessages:(id)arg1 ;
-(void)setTrainer:(RKMessageResponseManager *)arg1 ;
@end

