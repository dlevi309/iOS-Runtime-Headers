/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXTilingLayout, PXTilingLayoutInvalidationContext;

@interface PXTilingChangeEvent : NSObject {

	long long _type;
	PXTilingLayout* _layout;
	PXTilingLayoutInvalidationContext* _context;
	CGSize _referenceSize;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXTilingLayout * layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                     //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) PXTilingLayoutInvalidationContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(UIEdgeInsets)contentInset;
-(PXTilingLayoutInvalidationContext *)context;
-(CGSize)referenceSize;
-(id)description;
-(long long)type;
-(id)initWithChangeToLayout:(id)arg1 ;
-(id)initWithChangeToReferenceSize:(CGSize)arg1 ;
-(id)initWithChangeToContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithCoordinateSpaceChange;
-(id)initWithLayoutInvalidationContext:(id)arg1 ;
-(PXTilingLayout *)layout;
@end

