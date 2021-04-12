/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface PBSlideState : NSObject {

	NSMutableDictionary* mBuildOrderMap;
	unsigned mCurrentGroupId;

}
-(id)init;
-(void)reset;
-(id)buildOrderMap;
-(void)addBuild:(id)arg1 order:(unsigned)arg2 ;
-(unsigned)generateGroupId;
@end

