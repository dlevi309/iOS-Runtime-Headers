/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding> {

	IDSCKServerChangeToken* _ckToken;

}

@property (nonatomic,retain) IDSCKServerChangeToken * ckToken;              //@synthesize ckToken=_ckToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(IDSCKServerChangeToken *)ckToken;
-(void)setCkToken:(IDSCKServerChangeToken *)arg1 ;
-(id)initWithCKToken:(id)arg1 ;
@end

