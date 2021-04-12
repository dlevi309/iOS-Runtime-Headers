/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKCloudRecordObject.h>

@class PKCatalog;

@interface PKCloudRecordPassCatalog : PKCloudRecordObject {

	PKCatalog* _catalog;

}

@property (nonatomic,retain) PKCatalog * catalog;              //@synthesize catalog=_catalog - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKCatalog *)catalog;
-(long long)compare:(id)arg1 ;
-(id)item;
-(void)encodeWithCoder:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordObject:(id)arg1 ;
-(void)setCatalog:(PKCatalog *)arg1 ;
-(id)description;
-(id)_descriptionWithIncludeItem:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

