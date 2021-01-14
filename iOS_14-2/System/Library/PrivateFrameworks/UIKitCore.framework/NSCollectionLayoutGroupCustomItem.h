/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutGroupCustomItem : NSObject <NSCopying> {

	long long _zIndex;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) long long zIndex;              //@synthesize zIndex=_zIndex - In the implementation block
+(id)customItemWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
+(id)customItemWithFrame:(CGRect)arg1 ;
-(long long)zIndex;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 zIndex:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

