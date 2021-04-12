/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextRange.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {

	_UITextKitTextPosition* _start;
	_UITextKitTextPosition* _end;

}

@property (nonatomic,retain) UITextPosition * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) UITextPosition * end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) long long affinity; 
+(id)rangeWithRange:(NSRange)arg1 ;
+(id)rangeWithRange:(NSRange)arg1 affinity:(long long)arg2 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
+(id)defaultRange;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(UITextPosition *)start;
-(UITextPosition *)end;
-(long long)affinity;
-(NSRange)asRange;
-(void)setStart:(UITextPosition *)arg1 ;
-(void)setEnd:(UITextPosition *)arg1 ;
@end

