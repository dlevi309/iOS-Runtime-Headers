/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@class NSArray;

@interface TUIButtonBarGroupSet : NSObject {

	NSArray* _leadingButtonGroups;
	NSArray* _trailingButtonGroups;
	NSArray* _unifiedButtonGroups;

}

@property (nonatomic,retain) NSArray * leadingButtonGroups;               //@synthesize leadingButtonGroups=_leadingButtonGroups - In the implementation block
@property (nonatomic,retain) NSArray * trailingButtonGroups;              //@synthesize trailingButtonGroups=_trailingButtonGroups - In the implementation block
@property (nonatomic,retain) NSArray * unifiedButtonGroups;               //@synthesize unifiedButtonGroups=_unifiedButtonGroups - In the implementation block
-(NSArray *)leadingButtonGroups;
-(NSArray *)trailingButtonGroups;
-(void)setTrailingButtonGroups:(NSArray *)arg1 ;
-(void)setLeadingButtonGroups:(NSArray *)arg1 ;
-(NSArray *)unifiedButtonGroups;
-(void)setUnifiedButtonGroups:(NSArray *)arg1 ;
@end

