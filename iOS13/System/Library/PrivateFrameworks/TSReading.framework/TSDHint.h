/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDHint <NSObject>
@optional
-(CGSize*)maximumSize;
-(BOOL)isFirstHint;
-(CGSize*)effectiveSize;

@required
+(Class)archivedHintClass;
-(BOOL)overlapsWithSelection:(id)arg1;
-(void)offsetByDelta:(int)arg1;
-(id)firstChildHint;
-(id)lastChildHint;
-(id)copyForArchiving;

@end

