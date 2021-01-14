/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineInteger:(unsigned long long)arg1 ;
-(id)combineContentsOfPropertyListObject:(id)arg1 ;
@end

