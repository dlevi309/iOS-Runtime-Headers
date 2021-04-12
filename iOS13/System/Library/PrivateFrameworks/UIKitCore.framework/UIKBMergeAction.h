/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, UIKBGeometry;

@interface UIKBMergeAction : NSObject <NSCopying> {

	NSString* _remainingKeyName;
	NSString* _disappearingKeyName;
	NSArray* _orderedKeyList;
	UIKBGeometry* _factors;

}

@property (nonatomic,retain) NSString * remainingKeyName;                 //@synthesize remainingKeyName=_remainingKeyName - In the implementation block
@property (nonatomic,retain) NSString * disappearingKeyName;              //@synthesize disappearingKeyName=_disappearingKeyName - In the implementation block
@property (nonatomic,retain) NSArray * orderedKeyList;                    //@synthesize orderedKeyList=_orderedKeyList - In the implementation block
@property (nonatomic,retain) UIKBGeometry * factors;                      //@synthesize factors=_factors - In the implementation block
+(id)mergeActionWithRemainingKeyName:(id)arg1 disappearingKeyName:(id)arg2 factors:(id)arg3 ;
+(id)mergeActionWithOrderedKeyList:(id)arg1 factors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)remainingKeyName;
-(void)setRemainingKeyName:(NSString *)arg1 ;
-(NSString *)disappearingKeyName;
-(void)setDisappearingKeyName:(NSString *)arg1 ;
-(NSArray *)orderedKeyList;
-(void)setOrderedKeyList:(NSArray *)arg1 ;
-(UIKBGeometry *)factors;
-(void)setFactors:(UIKBGeometry *)arg1 ;
@end

