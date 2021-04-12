/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VSAccountMetadata *)accountMetadata;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
@end

