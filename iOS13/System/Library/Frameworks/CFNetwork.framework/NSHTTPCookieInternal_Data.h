/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSHTTPCookieInternal.h>

@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {

	CompactHTTPCookieWithData* _fromData;

}
-(id)init;
-(void)dealloc;
-(HTTPCookie*)_inner;
-(id)_initWithProperties:(id)arg1 fromString:(BOOL)arg2 ;
-(id)_initWithCookie:(id)arg1 partition:(id)arg2 ;
-(id)_initWithHeader:(const CompactCookieHeaderRef)arg1 ;
@end

