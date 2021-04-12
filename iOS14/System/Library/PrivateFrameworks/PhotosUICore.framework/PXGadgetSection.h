/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, NSArray, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject {

	long long _changeCount;
	NSString* _identifier;
	NSArray* _gadgets;
	PXGadgetSectionHeader* _sectionHeader;
	PXGadgetSpec* _gadgetSpec;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * gadgets;                                  //@synthesize gadgets=_gadgets - In the implementation block
@property (nonatomic,readonly) PXGadgetSectionHeader * sectionHeader;              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
-(PXGadgetSpec *)gadgetSpec;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(id)description;
-(id)initWithIdentifier:(id)arg1 gadgets:(id)arg2 ;
-(NSString *)identifier;
-(PXGadgetSectionHeader *)sectionHeader;
-(NSArray *)gadgets;
@end

