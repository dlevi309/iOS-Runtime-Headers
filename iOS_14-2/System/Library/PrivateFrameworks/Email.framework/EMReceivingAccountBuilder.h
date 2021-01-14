/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEmailAddresses:(id)arg1;
-(NSArray *)emailAddresses;
-(void)setSourceIsManaged:(BOOL)arg1;
-(void)setStatisticsKind:(id)arg1;
-(void)setShouldArchiveByDefault:(BOOL)arg1;
-(NSString *)statisticsKind;
-(EMDeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(id)arg1;
-(BOOL)shouldArchiveByDefault;

@end

