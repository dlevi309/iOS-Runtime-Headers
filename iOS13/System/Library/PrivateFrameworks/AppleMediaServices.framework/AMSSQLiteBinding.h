/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSSQLiteBinding <NSObject>
@required
-(void)bindString:(id)arg1 atPosition:(int)arg2;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2;
-(void)bindNullAtPosition:(int)arg1;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2;
-(void)bindData:(id)arg1 atPosition:(int)arg2;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2;
-(int)clearBindings;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2;
-(void)bindArray:(id)arg1 atPosition:(int)arg2;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindDate:(id)arg1 atPosition:(int)arg2;
-(void)bindDictionary:(id)arg1 atPosition:(int)arg2;
-(void)bindInt:(int)arg1 atPosition:(int)arg2;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2;
-(void)bindURL:(id)arg1 atPosition:(int)arg2;

@end

