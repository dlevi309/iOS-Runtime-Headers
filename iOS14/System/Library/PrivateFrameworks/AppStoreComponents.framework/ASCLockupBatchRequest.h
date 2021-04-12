/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSArray;

@interface ASCLockupBatchRequest : NSObject <NSSecureCoding, NSCopying> {

	NSSet* _ids;
	NSString* _kind;
	NSString* _context;

}

@property (nonatomic,copy,readonly) NSSet * ids;                     //@synthesize ids=_ids - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requests; 
+(BOOL)supportsSecureCoding;
+(id)lockupBatchRequestsFromRequests:(id)arg1 ;
-(NSSet *)ids;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)context;
-(NSArray *)requests;
-(NSString *)kind;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)lockupBatchRequestWithIDs:(id)arg1 ;
-(id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 ;
@end

