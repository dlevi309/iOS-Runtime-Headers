/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSXPCConnection, NSFileAccessNode, NSMutableSet, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

	NSArray* _readingURLs;
	unsigned long long _readingOptions;
	NSArray* _writingURLs;
	unsigned long long _writingOptions;
	NSXPCConnection* _subarbiterConnection;
	NSArray* _readingLocations;
	NSArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	NSMutableSet* _forwardedClaimIDs;
	NSMutableDictionary* _readRelinquishmentsByPresenterID;
	NSMutableDictionary* _writeRelinquishmentsByPresenterID;
	BOOL _nullified;

}

@property (readonly) BOOL nullified;                                    //@synthesize nullified=_nullified - In the implementation block
@property (retain) NSXPCConnection * subarbiterConnection;              //@synthesize subarbiterConnection=_subarbiterConnection - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)revoked;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg1 ;
-(void)granted;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)devalueOldClaim:(id)arg1 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(void)forwardReacquisitionForWritingClaim:(BOOL)arg1 withID:(n@)arg2 toPresenterForID:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(id)relinquishmentForWrite:(BOOL)arg1 toPresenterForID:(id)arg2 ;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg1 withID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 toPresenter:(id)arg6 usingReplySender:(/*^block*/id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)subarbiterConnection;
-(void)forwardUsingConnection:(id)arg1 withServer:(id)arg2 crashHandler:(/*^block*/id)arg3 ;
-(id)initWithReadingURLs:(id)arg1 options:(unsigned long long)arg2 writingURLs:(id)arg3 options:(unsigned long long)arg4 claimer:(/*^block*/id)arg5 ;
-(void)invokeClaimer;
-(void)setSubarbiterConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)nullified;
-(void)dealloc;
-(void)evaluateNewClaim:(id)arg1 ;
@end

