/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject {

	NSMutableArray* _prototypes;
	NSMutableArray* _entries;
	struct {
		BOOL areEntriesDirty;
	}  _flags;

}
-(id)init;
-(id)prototypeForItemAtIndex:(unsigned long long)arg1 ;
-(id)allPrototypes;
-(void)addPrototype:(id)arg1 forIndexes:(id)arg2 ;
@end

