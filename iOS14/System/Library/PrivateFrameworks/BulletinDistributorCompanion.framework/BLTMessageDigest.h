/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding> {

	NSData* _messageDigest;

}

@property (nonatomic,retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)messageDigest;
-(BOOL)isEqualToMessageDigest:(id)arg1 ;
-(void)setMessageDigest:(NSData *)arg1 ;
@end

