/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSSet, NSArray;

@interface SFNavigationBarAccessoryButtonArrangement : NSObject {

	NSSet* _allButtonTypes;
	NSArray* _trailingButtonTypes;
	NSArray* _leadingButtonTypes;

}

@property (nonatomic,readonly) NSArray * trailingButtonTypes;              //@synthesize trailingButtonTypes=_trailingButtonTypes - In the implementation block
@property (nonatomic,readonly) NSArray * leadingButtonTypes;               //@synthesize leadingButtonTypes=_leadingButtonTypes - In the implementation block
-(id)description;
-(id)initWithLeadingButtonTypes:(id)arg1 trailingButtonTypes:(id)arg2 ;
-(BOOL)containsButtonType:(long long)arg1 ;
-(NSArray *)trailingButtonTypes;
-(void)enumerateButtonTypesFromEdge:(unsigned long long)arg1 withLayoutDirection:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)leadingButtonTypes;
@end

