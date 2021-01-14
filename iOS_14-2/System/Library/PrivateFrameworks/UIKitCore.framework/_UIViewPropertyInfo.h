/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(void)setPreviousValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)previousValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIVectorOperatable>)value;
@end

