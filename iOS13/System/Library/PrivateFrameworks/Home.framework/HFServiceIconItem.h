/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@protocol HFIconDescriptor;
@interface HFServiceIconItem : HFItem {

	id<HFIconDescriptor> _iconDescriptor;

}

@property (nonatomic,readonly) id<HFIconDescriptor> iconDescriptor;              //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)initWithIconDescriptor:(id)arg1 ;
@end

