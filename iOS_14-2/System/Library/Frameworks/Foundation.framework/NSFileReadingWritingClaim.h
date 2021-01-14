/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingWritingClaim : NSFileAccessClaim {

	NSURL* _readingURL;
	BOOL _readingURLDidChange;
	unsigned long long _readingOptions;
	NSURL* _writingURL;
	BOOL _writingURLDidChange;
	unsigned long long _writingOptions;
	NSFileAccessNode* _readingLocation;
	NSFileAccessNode* _writingLocation;
	NSFileAccessNode* _rootNode;
	long long _readingLinkResolutionCount;

}
+(BOOL)supportsSecureCoding;
-(id)allURLs;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg1 ;
-(void)granted;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(void)protectFilesAgainstEviction;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPurposeID:(id)arg1 readingURL:(id)arg2 options:(unsigned long long)arg3 writingURL:(id)arg4 options:(unsigned long long)arg5 claimer:(/*^block*/id)arg6 ;
-(void)invokeClaimer;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)blocksClaim:(id)arg1 ;
@end

