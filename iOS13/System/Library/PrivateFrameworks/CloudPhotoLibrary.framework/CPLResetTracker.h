/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate;

@interface CPLResetTracker : NSObject <NSSecureCoding> {

	NSArray* _resetReasons;

}

@property (nonatomic,copy,readonly) NSArray * resetReasons;              //@synthesize resetReasons=_resetReasons - In the implementation block
@property (nonatomic,readonly) NSDate * earliestReasonDate; 
@property (nonatomic,readonly) NSDate * likelyResetDate; 
@property (nonatomic,readonly) BOOL hasReasons; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)registerLikelyResetReason:(id)arg1 ;
+(id)currentTracker;
+(void)_storeReasonsLocked;
+(void)_registerReasonLocked:(id)arg1 ;
+(void)registerLikelyResetReason:(id)arg1 arguments:(char*)arg2 ;
+(void)discardTracker:(id)arg1 ;
+(id)currentReasonDescriptions;
+(id)registerTentativeResetReasonIfCrashing:(id)arg1 ;
+(void)discardTentativeResetReason:(id)arg1 ;
+(BOOL)shouldIgnoreDefaultsCPLKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResetReasons:(id)arg1 ;
-(NSDate *)earliestReasonDate;
-(id)likelyResetReasonWithImmediateReason:(id)arg1 ;
-(NSDate *)likelyResetDate;
-(BOOL)hasReasons;
-(NSArray *)resetReasons;
@end

