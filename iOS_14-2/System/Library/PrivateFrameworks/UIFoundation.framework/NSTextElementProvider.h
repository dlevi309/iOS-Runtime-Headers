/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

@class NSTextRange;


@protocol NSTextElementProvider <NSObject>
@property (readonly) NSTextRange * documentRange; 
@optional
-(id)adjustedRangeFromRange:(id)arg1 inEditingTextSelection:(BOOL)arg2;

@required
-(BOOL)synchronizeToBackingStore:(/*^block*/id)arg1;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
-(NSTextRange *)documentRange;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2;
-(id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3;
-(void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;

@end

