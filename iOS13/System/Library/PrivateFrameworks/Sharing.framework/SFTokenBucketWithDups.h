/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


#import <Sharing/Sharing-Structs.h>
@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {

	SFTokenBucket* _bucket;
	unsigned long long _maxDups;
	CFArrayRef _dups;

}
-(id)init;
-(void)dealloc;
-(id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2 ;
-(BOOL)acquireTokenForIdentifier:(unsigned long long)arg1 ;
@end

