/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/EMAccount.h>
#import <libobjc.A.dylib/EMReceivingAccountBuilder.h>

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder> {

	BOOL _primaryiCloudAccount;
	BOOL _sourceIsManaged;
	BOOL _shouldArchiveByDefault;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;
	EMDeliveryAccount* _deliveryAccount;
	NSArray* _emailAddresses;
	NSString* _statisticsKind;

}

@property (nonatomic,retain) EMDeliveryAccount * deliveryAccount;                                  //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                                             //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic) BOOL shouldArchiveByDefault;                                          //@synthesize shouldArchiveByDefault=_shouldArchiveByDefault - In the implementation block
@property (nonatomic,copy) NSString * statisticsKind;                                              //@synthesize statisticsKind=_statisticsKind - In the implementation block
@property (nonatomic,copy) NSString * username;                                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                                    //@synthesize hostname=_hostname - In the implementation block
@property (assign,getter=isPrimaryiCloudAccount,nonatomic) BOOL primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)sourceIsManaged;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(NSString *)username;
-(id)name;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
-(void)setStatisticsKind:(NSString *)arg1 ;
-(void)setShouldArchiveByDefault:(BOOL)arg1 ;
-(NSString *)statisticsKind;
-(EMDeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(EMDeliveryAccount *)arg1 ;
-(void)setPrimaryiCloudAccount:(BOOL)arg1 ;
-(void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(/*^block*/id)arg3 ;
-(id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(/*^block*/id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPrimaryiCloudAccount;
-(BOOL)shouldArchiveByDefault;
@end

