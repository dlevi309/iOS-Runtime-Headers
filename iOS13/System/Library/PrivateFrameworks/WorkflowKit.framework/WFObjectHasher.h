/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@interface WFObjectHasher : NSObject {

	SipHasher _hasher;
	unsigned long long _hash;
	BOOL _finalized;

}
-(id)init;
-(unsigned long long)finalize;
-(id)combine:(id)arg1 ;
-(id)combineInteger:(long long)arg1 ;
-(id)combineContentsOf:(id)arg1 ;
-(id)combineBool:(BOOL)arg1 ;
-(id)combineBytes:(void*)arg1 size:(unsigned long long)arg2 ;
@end

