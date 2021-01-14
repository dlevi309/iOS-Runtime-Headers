/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXGViewUserData.h>

@class PXOperationStatus, NSString;

@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData> {

	PXOperationStatus* _loadStatus;

}

@property (nonatomic,copy) PXOperationStatus * loadStatus;              //@synthesize loadStatus=_loadStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)hash;
-(void)setLoadStatus:(PXOperationStatus *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(PXOperationStatus *)loadStatus;
@end

