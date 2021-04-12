/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSString;

@interface NUDigest : NSObject {

	NSString* _stringValue;
	CC_MD5state_st _context;

}
-(void)finalize;
-(id)init;
-(id)stringValue;
-(void)addString:(id)arg1 ;
-(void)addCString:(const char*)arg1 ;
-(void)addBytes:(const void*)arg1 length:(long long)arg2 ;
@end

