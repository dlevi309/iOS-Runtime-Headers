/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	long long _offset;
	long long _affinity;

}

@property (assign) long long offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) long long affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(long long)arg1 affinity:(long long)arg2 ;
+(id)positionWithOffset:(long long)arg1 ;
-(id)init;
-(void)setAffinity:(long long)arg1 ;
-(long long)affinity;
-(long long)offset;
-(id)description;
-(void)setOffset:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

