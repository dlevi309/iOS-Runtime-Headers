/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)orderedKeyList;
-(void)setDisappearingKeyName:(NSString *)arg1 ;
-(void)setRemainingKeyName:(NSString *)arg1 ;
-(NSString *)remainingKeyName;
-(void)setOrderedKeyList:(NSArray *)arg1 ;
-(void)setFactors:(UIKBGeometry *)arg1 ;
-(NSString *)disappearingKeyName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIKBGeometry *)factors;
@end

