/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGadget;
@class NSString;

@interface PXGadgetNavigationItem : NSObject {

	BOOL _animated;
	unsigned long long _gadgetType;
	NSString* _gadgetId;
	id<PXGadget> _gadget;
	long long _navigationType;
	/*^block*/id _navigationBlock;

}

@property (nonatomic,readonly) long long navigationType;                   //@synthesize navigationType=_navigationType - In the implementation block
@property (nonatomic,readonly) unsigned long long gadgetType;              //@synthesize gadgetType=_gadgetType - In the implementation block
@property (nonatomic,readonly) NSString * gadgetId;                        //@synthesize gadgetId=_gadgetId - In the implementation block
@property (nonatomic,readonly) id<PXGadget> gadget;                        //@synthesize gadget=_gadget - In the implementation block
@property (nonatomic,copy,readonly) id navigationBlock;                    //@synthesize navigationBlock=_navigationBlock - In the implementation block
@property (nonatomic,readonly) BOOL animated;                              //@synthesize animated=_animated - In the implementation block
-(long long)navigationType;
-(BOOL)animated;
-(unsigned long long)gadgetType;
-(id)navigationBlock;
-(id)initWithGadget:(id)arg1 navigationBlock:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
-(NSString *)gadgetId;
-(id<PXGadget>)gadget;
-(id)initWithGadetType:(unsigned long long)arg1 navigationBlock:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
-(id)initWithGadgetId:(id)arg1 navigationBlock:(/*^block*/id)arg2 animated:(BOOL)arg3 ;
@end

