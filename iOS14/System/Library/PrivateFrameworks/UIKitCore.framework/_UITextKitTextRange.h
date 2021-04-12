/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultRange;
+(id)rangeWithRange:(NSRange)arg1 affinity:(long long)arg2 ;
+(id)rangeWithStart:(id)arg1 end:(id)arg2 ;
-(UITextPosition *)end;
-(id)init;
-(UITextPosition *)start;
-(long long)affinity;
-(id)description;
-(void)setEnd:(UITextPosition *)arg1 ;
-(BOOL)isEmpty;
-(NSRange)asRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStart:(UITextPosition *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

