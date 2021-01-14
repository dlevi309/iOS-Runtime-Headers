/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding> {

	IDSCKServerChangeToken* _ckToken;

}

@property (nonatomic,retain) IDSCKServerChangeToken * ckToken;              //@synthesize ckToken=_ckToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(IDSCKServerChangeToken *)ckToken;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCKToken:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCkToken:(IDSCKServerChangeToken *)arg1 ;
@end

