/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@class NSMutableDictionary;

@interface PathPolicyManager : NSObject {

	NSMutableDictionary* _pathToPathId;
	long long _nextPathId;

}
-(id)init;
-(void)dealloc;
-(id)pathIDForPath:(id)arg1 lookup:(BOOL)arg2 ;
-(void)removeAllEntries;
@end

