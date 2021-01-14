/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, VSAccountChannels;

@interface VSAccountsArchive : NSObject <NSSecureCoding> {

	NSArray* _accounts;
	VSAccountChannels* _channels;

}

@property (nonatomic,copy) NSArray * accounts;                        //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,copy) VSAccountChannels * channels;              //@synthesize channels=_channels - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setChannels:(VSAccountChannels *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSAccountChannels *)channels;
@end

