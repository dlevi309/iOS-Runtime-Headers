/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextRange;


@protocol NSTextElementProvider <NSObject>
@property (readonly) NSTextRange * documentRange; 
@required
-(NSTextRange *)documentRange;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1;

@end

