/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface BLTMessageDigest : NSObject <NSSecureCoding> {

	NSData* _messageDigest;

}

@property (nonatomic,retain) NSData * messageDigest;              //@synthesize messageDigest=_messageDigest - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSData *)messageDigest;
-(BOOL)isEqualToMessageDigest:(id)arg1 ;
-(void)setMessageDigest:(NSData *)arg1 ;
@end

