/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray;

@interface SBGreenController : NSObject {

	NSArray* _relevantGreenKeys;
	unsigned long long _fileExistenceState;

}
-(id)init;
-(void)performPreBuddyWork;
-(void)_readFileStateFromDisk;
-(id)_defaultValuesDictionaryAndState:(unsigned long long*)arg1 ;
-(BOOL)_writeGreenValuesToDisk:(id)arg1 withState:(unsigned long long)arg2 ;
-(unsigned long long)_effectivePlaceIsAmbiguous:(BOOL*)arg1 ;
-(id)_deviceRegionCode;
@end

