/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIVectorOperatable;
@interface _UIViewPropertyInfo : NSObject <NSCopying> {

	id<UIVectorOperatable> _previousValue;
	id<UIVectorOperatable> _value;

}

@property (nonatomic,retain) id<UIVectorOperatable> previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> value;                      //@synthesize value=_value - In the implementation block
+(id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIVectorOperatable>)value;
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)previousValue;
-(void)setPreviousValue:(id<UIVectorOperatable>)arg1 ;
@end

