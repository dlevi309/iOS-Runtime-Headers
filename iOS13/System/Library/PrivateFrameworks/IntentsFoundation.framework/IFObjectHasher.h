/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/


#import <IntentsFoundation/IntentsFoundation-Structs.h>
@interface IFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(unsigned long long)finalize;
-(id)combine:(id)arg1 ;
-(id)combineContentsOfPropertyListObject:(id)arg1 ;
-(id)combineInteger:(unsigned long long)arg1 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
@end

