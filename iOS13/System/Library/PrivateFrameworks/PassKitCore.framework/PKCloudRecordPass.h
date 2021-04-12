/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject {

	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;              //@synthesize pass=_pass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)item;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
@end

