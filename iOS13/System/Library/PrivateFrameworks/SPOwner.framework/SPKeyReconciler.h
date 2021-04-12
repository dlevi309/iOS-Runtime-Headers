/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject {

	NSDictionary* _backingDictionary;
	NSMutableArray* _keyIndices;

}
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)reconcileKey:(id)arg1 matchedIndex:(unsigned*)arg2 sequence:(unsigned char*)arg3 error:(unsigned char*)arg4 ;
@end

