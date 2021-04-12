/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface CATMessage : NSObject <NSSecureCoding> {

	NSUUID* _messageUUID;

}

@property (nonatomic,retain) id cat_assertion; 
@property (nonatomic,retain) NSUUID * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)messageUUID;
-(void)setMessageUUID:(NSUUID *)arg1 ;
-(id)cat_assertion;
-(void)setCat_assertion:(id)arg1 ;
@end

