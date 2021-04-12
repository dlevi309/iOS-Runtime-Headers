/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

@class EMDeliveryAccount, NSArray, NSString;


@protocol EMReceivingAccountBuilder <EMAccountBuilder>
@property (nonatomic,retain) EMDeliveryAccount * deliveryAccount; 
@property (nonatomic,retain) NSArray * emailAddresses; 
@property (assign,nonatomic) BOOL sourceIsManaged; 
@property (assign,nonatomic) BOOL shouldArchiveByDefault; 
@property (nonatomic,copy) NSString * statisticsKind; 
@required
-(BOOL)sourceIsManaged;
-(NSArray *)emailAddresses;
-(void)setSourceIsManaged:(BOOL)arg1;
-(void)setEmailAddresses:(id)arg1;
-(NSString *)statisticsKind;
-(EMDeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(BOOL)shouldArchiveByDefault;
-(void)setStatisticsKind:(id)arg1;
-(void)setShouldArchiveByDefault:(BOOL)arg1;

@end

