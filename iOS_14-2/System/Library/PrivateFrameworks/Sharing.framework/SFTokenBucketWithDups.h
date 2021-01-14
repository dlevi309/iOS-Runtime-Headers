/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2 ;
-(BOOL)acquireTokenForIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
@end

