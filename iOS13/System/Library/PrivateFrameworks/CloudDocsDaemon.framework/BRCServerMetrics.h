/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface BRCServerMetrics : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _quotaUsed;
	NSNumber* _recursiveChildCount;
	NSNumber* _sharedByMeRecursiveCount;
	NSNumber* _sharedAliasRecursiveCount;
	NSNumber* _childCount;

}

@property (nonatomic,retain) NSNumber * quotaUsed;                              //@synthesize quotaUsed=_quotaUsed - In the implementation block
@property (nonatomic,retain) NSNumber * recursiveChildCount;                    //@synthesize recursiveChildCount=_recursiveChildCount - In the implementation block
@property (nonatomic,retain) NSNumber * sharedByMeRecursiveCount;               //@synthesize sharedByMeRecursiveCount=_sharedByMeRecursiveCount - In the implementation block
@property (nonatomic,retain) NSNumber * sharedAliasRecursiveCount;              //@synthesize sharedAliasRecursiveCount=_sharedAliasRecursiveCount - In the implementation block
@property (nonatomic,retain) NSNumber * childCount;                             //@synthesize childCount=_childCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)childCount;
-(NSNumber *)quotaUsed;
-(void)setQuotaUsed:(NSNumber *)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(id)initWithServerMetrics:(id)arg1 ;
-(NSNumber *)recursiveChildCount;
-(NSNumber *)sharedByMeRecursiveCount;
-(NSNumber *)sharedAliasRecursiveCount;
-(void)setRecursiveChildCount:(NSNumber *)arg1 ;
-(void)setSharedByMeRecursiveCount:(NSNumber *)arg1 ;
-(void)setSharedAliasRecursiveCount:(NSNumber *)arg1 ;
-(void)setChildCount:(NSNumber *)arg1 ;
@end

