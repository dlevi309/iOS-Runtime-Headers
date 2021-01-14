/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol PQLEnumeration;
@class BRCPCSChainInfo, PQLResultSet;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {

	BRCPCSChainInfo* _chainInfo;
	PQLResultSet*<PQLEnumeration> _enumerator;

}
-(id)nextObject;
-(void)dealloc;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)chainInfo;
@end

