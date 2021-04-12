/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXGLayout;

@interface PXGFence : NSObject {

	unsigned long long _type;
	PXGLayout* _layout;

}

@property (nonatomic,__weak,readonly) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(id)init;
-(id)initWithLayout:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(PXGLayout *)layout;
@end

