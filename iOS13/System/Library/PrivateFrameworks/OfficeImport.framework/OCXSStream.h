/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface OCXSStream : NSObject {

	NSMutableArray* mLevelStack;

}
-(id)init;
-(BOOL)hasLevels;
-(int)currentContextDepth;
-(BOOL)popLevel;
-(int)currentContextChildDepth;
-(void)pushLevel:(int)arg1 name:(const char*)arg2 ;
@end

