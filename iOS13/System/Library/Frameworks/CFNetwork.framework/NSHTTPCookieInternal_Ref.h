/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieInternal.h>

@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {

	CompactHTTPCookieReference* _fromRef;

}
-(id)init;
-(void)dealloc;
-(HTTPCookie*)_inner;
-(id)_initWithReference:(const CompactCookieArrayRef)arg1 index:(long long)arg2 ;
@end
