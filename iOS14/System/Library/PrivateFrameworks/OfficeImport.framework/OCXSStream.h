/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

