/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

	id _delegate;

}
+(Class)_mutableStringClass;
-(id)delegate;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)endEditing;
-(void)beginEditing;
@end

