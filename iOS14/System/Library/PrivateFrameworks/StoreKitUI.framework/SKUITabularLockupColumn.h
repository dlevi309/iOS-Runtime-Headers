/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUITabularLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	long long _identifier;
	CGSize _size;

}

@property (assign,nonatomic) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)description;
-(void)setIdentifier:(long long)arg1 ;
-(long long)identifier;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
-(id)initWithColumnIdentifier:(long long)arg1 ;
@end

