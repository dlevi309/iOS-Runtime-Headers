/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {

	NSURL* _url;
	BOOL _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;
	NSFileAccessNode* _rootNode;
	long long _linkResolutionCount;

}
+(BOOL)supportsSecureCoding;
-(id)allURLs;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)granted;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)protectFilesAgainstEviction;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(void)invokeClaimer;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)resolveURLThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)blocksClaim:(id)arg1 ;
@end

