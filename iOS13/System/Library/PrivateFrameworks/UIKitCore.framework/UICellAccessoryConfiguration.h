/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setTrailingAccessories:(NSArray *)arg1 ;
-(void)setLeadingAccessories:(NSArray *)arg1 ;
-(NSArray *)leadingAccessories;
-(NSArray *)trailingAccessories;
-(BOOL)alwaysNeedsLayout;
@end

