/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

