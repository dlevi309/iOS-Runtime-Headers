/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKPass;

@interface PKCloudRecordPass : PKCloudRecordObject {

	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;              //@synthesize pass=_pass - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)compare:(id)arg1 ;
-(void)setPass:(PKPass *)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(id)description;
-(PKPass *)pass;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

