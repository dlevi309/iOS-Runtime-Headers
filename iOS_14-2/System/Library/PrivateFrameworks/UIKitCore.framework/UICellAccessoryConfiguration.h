/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface UICellAccessoryConfiguration : NSObject {

	BOOL _leadingAlwaysNeedsLayout;
	BOOL _trailingAlwaysNeedsLayout;
	NSArray* _leadingAccessories;
	NSArray* _trailingAccessories;

}

@property (nonatomic,copy) NSArray * leadingAccessories;               //@synthesize leadingAccessories=_leadingAccessories - In the implementation block
@property (nonatomic,copy) NSArray * trailingAccessories;              //@synthesize trailingAccessories=_trailingAccessories - In the implementation block
-(id)init;
-(BOOL)alwaysNeedsLayout;
-(void)setTrailingAccessories:(NSArray *)arg1 ;
-(id)description;
-(void)setLeadingAccessories:(NSArray *)arg1 ;
-(NSArray *)trailingAccessories;
-(NSArray *)leadingAccessories;
-(BOOL)isEqual:(id)arg1 ;
@end

