/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSMutableArray, NSFileAccessNode;

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {

	NSMutableArray* _readingURLs;
	unsigned long long* _readingOptions;
	BOOL* _readingURLsDidChange;
	NSMutableArray* _writingURLs;
	unsigned long long* _writingOptions;
	BOOL* _writingURLsDidChange;
	NSMutableArray* _readingLocations;
	NSMutableArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	unsigned long long _currentlyLinkResolvingURLIndex;
	long long _readingLinkResolutionCount;

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
-(id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(/*^block*/id)arg3 ;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(void)protectFilesAgainstEviction;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invokeClaimer;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)blocksClaim:(id)arg1 ;
@end

