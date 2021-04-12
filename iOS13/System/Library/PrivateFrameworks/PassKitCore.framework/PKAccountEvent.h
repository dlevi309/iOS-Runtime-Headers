/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSDate, NSSet;

@interface PKAccountEvent : NSObject <PKCloudStoreCoding> {

	BOOL _blockNotification;
	NSString* _identifier;
	NSString* _accountIdentifier;
	long long _type;
	NSDate* _date;
	NSDate* _expirationDate;
	NSSet* _items;
	unsigned long long _updateReasons;

}

@property (nonatomic,retain) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * accountIdentifier;                      //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL blockNotification;                            //@synthesize blockNotification=_blockNotification - In the implementation block
@property (nonatomic,retain) NSSet * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long updateReasons;                //@synthesize updateReasons=_updateReasons - In the implementation block
@property (nonatomic,readonly) BOOL updateReasonIsInitialDownload; 
+(BOOL)supportsSecureCoding;
+(id)eventIdentifierFromRecordName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)recordName;
-(NSString *)accountIdentifier;
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(unsigned long long)itemType;
-(void)addUpdateReasons:(unsigned long long)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(BOOL)isEqualToAccountEvent:(id)arg1 ;
-(unsigned long long)updateReasons;
-(id)recordNameForItem:(id)arg1 ;
-(BOOL)updateReasonIsInitialDownload;
-(id)updateReasonsDescription;
-(BOOL)blockNotification;
-(void)setBlockNotification:(BOOL)arg1 ;
@end

