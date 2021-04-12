/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSString;

@interface NUDigest : NSObject {

	NSString* _stringValue;
	CC_MD5state_st _context;

}
-(id)init;
-(void)finalize;
-(id)stringValue;
-(void)addString:(id)arg1 ;
-(void)addCString:(const char*)arg1 ;
-(void)addBytes:(const void*)arg1 length:(long long)arg2 ;
@end

