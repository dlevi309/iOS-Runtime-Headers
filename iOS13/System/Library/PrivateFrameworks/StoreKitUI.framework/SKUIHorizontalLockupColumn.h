/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUIHorizontalLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	long long _identifier;
	CGSize _size;

}

@property (assign,nonatomic) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
-(id)init;
-(id)description;
-(long long)identifier;
-(CGSize)size;
-(void)setIdentifier:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
@end

