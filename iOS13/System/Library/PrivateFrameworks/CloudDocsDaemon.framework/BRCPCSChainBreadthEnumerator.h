/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol PQLEnumeration;
@class BRCPCSChainInfo, PQLResultSet;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {

	BRCPCSChainInfo* _chainInfo;
	PQLResultSet*<PQLEnumeration> _enumerator;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)chainInfo;
@end

