/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface BRServerMetrics : NSObject <NSCopying, NSSecureCoding> {

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
-(NSNumber *)quotaUsed;
-(id)initWithServerMetrics:(id)arg1 ;
-(NSNumber *)recursiveChildCount;
-(NSNumber *)sharedByMeRecursiveCount;
-(NSNumber *)sharedAliasRecursiveCount;
-(NSNumber *)childCount;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(void)setQuotaUsed:(NSNumber *)arg1 ;
-(void)setRecursiveChildCount:(NSNumber *)arg1 ;
-(void)setSharedByMeRecursiveCount:(NSNumber *)arg1 ;
-(void)setSharedAliasRecursiveCount:(NSNumber *)arg1 ;
-(void)setChildCount:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

