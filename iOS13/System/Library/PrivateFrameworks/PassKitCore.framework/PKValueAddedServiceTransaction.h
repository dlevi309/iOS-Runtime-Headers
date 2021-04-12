/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKValueAddedMerchant, NSString, NSNumber, NSDate;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	BOOL _didSucceed;
	PKValueAddedMerchant* _merchant;
	NSString* _identifier;
	NSString* _merchantURL;
	NSNumber* _terminalApplicationVersion;
	long long _terminalMode;
	NSDate* _transactionDate;
	long long _error;

}

@property (nonatomic,retain) PKValueAddedMerchant * merchant;                    //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * merchantURL;                             //@synthesize merchantURL=_merchantURL - In the implementation block
@property (nonatomic,retain) NSNumber * terminalApplicationVersion;              //@synthesize terminalApplicationVersion=_terminalApplicationVersion - In the implementation block
@property (assign,nonatomic) long long terminalMode;                             //@synthesize terminalMode=_terminalMode - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                                    //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain) NSDate * transactionDate;                           //@synthesize transactionDate=_transactionDate - In the implementation block
@property (assign,nonatomic) long long error;                                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(long long)error;
-(void)setError:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(PKValueAddedMerchant *)merchant;
-(long long)terminalMode;
-(void)setMerchant:(PKValueAddedMerchant *)arg1 ;
-(void)setMerchantURL:(NSString *)arg1 ;
-(void)setTerminalApplicationVersion:(NSNumber *)arg1 ;
-(void)setTerminalMode:(long long)arg1 ;
-(NSString *)merchantURL;
-(NSNumber *)terminalApplicationVersion;
@end

