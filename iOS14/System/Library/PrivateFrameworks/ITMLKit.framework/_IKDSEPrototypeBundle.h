/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

