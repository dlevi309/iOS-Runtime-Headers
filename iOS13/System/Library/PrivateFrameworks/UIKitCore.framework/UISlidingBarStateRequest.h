/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying> {

	BOOL _userInitiated;
	double _leadingWidth;
	double _trailingWidth;

}

@property (assign,nonatomic) BOOL userInitiated;                //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) double leadingWidth;               //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;              //@synthesize trailingWidth=_trailingWidth - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLeadingWidth:(double)arg1 ;
-(double)leadingWidth;
-(double)trailingWidth;
-(void)setTrailingWidth:(double)arg1 ;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(id)_closestEqualOrLargerState:(id)arg1 ;
-(id)_matchingState:(id)arg1 ;
-(id)_closestState:(id)arg1 returningDistance:(double*)arg2 ;
-(id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double*)arg2 ;
-(id)_closestState:(id)arg1 ;
@end

