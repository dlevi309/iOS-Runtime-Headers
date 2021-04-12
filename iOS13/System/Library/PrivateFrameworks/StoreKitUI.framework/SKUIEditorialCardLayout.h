/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, SKUILockupViewElement, NSArray;

@interface SKUIEditorialCardLayout : NSObject {

	NSMutableArray* _allLockups;
	SKUILockupViewElement* _primaryLockup;
	CGSize _primaryLockupSize;
	double _secondaryLockupWidth;

}

@property (nonatomic,readonly) NSArray * allLockups;                               //@synthesize allLockups=_allLockups - In the implementation block
@property (nonatomic,readonly) SKUILockupViewElement * primaryLockup;              //@synthesize primaryLockup=_primaryLockup - In the implementation block
@property (nonatomic,readonly) CGSize primaryLockupSize;                           //@synthesize primaryLockupSize=_primaryLockupSize - In the implementation block
@property (nonatomic,readonly) double secondaryLockupWidth;                        //@synthesize secondaryLockupWidth=_secondaryLockupWidth - In the implementation block
-(id)initWithCard:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(NSArray *)allLockups;
-(SKUILockupViewElement *)primaryLockup;
-(CGSize)primaryLockupSize;
-(double)secondaryLockupWidth;
@end

