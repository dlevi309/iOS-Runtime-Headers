/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSAccountChannels *)channels;
-(NSArray *)accounts;
-(void)setChannels:(VSAccountChannels *)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
@end

