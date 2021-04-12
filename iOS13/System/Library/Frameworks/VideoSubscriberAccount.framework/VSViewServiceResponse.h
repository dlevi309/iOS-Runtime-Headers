/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VSAccountMetadata;

@interface VSViewServiceResponse : NSObject <NSCopying, NSSecureCoding> {

	VSAccountMetadata* _accountMetadata;

}

@property (nonatomic,copy) VSAccountMetadata * accountMetadata;              //@synthesize accountMetadata=_accountMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSAccountMetadata *)accountMetadata;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
@end

