/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _REMFetchExecutor, REMFetchResultToken;

@interface REMFetchRequest : NSObject <NSSecureCoding> {

	unsigned long long _fetchLimit;
	_REMFetchExecutor* _fetchExecutor;
	REMFetchResultToken* _fetchResultToken;
	long long _type;

}

@property (nonatomic,retain) _REMFetchExecutor * fetchExecutor;                   //@synthesize fetchExecutor=_fetchExecutor - In the implementation block
@property (nonatomic,retain) REMFetchResultToken * fetchResultToken;              //@synthesize fetchResultToken=_fetchResultToken - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                       //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)fetchLimit;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(REMFetchResultToken *)fetchResultToken;
-(void)setFetchResultToken:(REMFetchResultToken *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithType:(long long)arg1 ;
-(id)initWithFetchExecutor:(id)arg1 ;
-(id)storagesAndParentFetchRequest;
-(id)storagesOnlyFetchRequest;
-(id)countOnlyFetchRequest;
-(id)objectIDsOnlyFetchRequest;
-(id)metadataFetchRequest;
-(id)fetchRequestWithFetchResultToken:(id)arg1 ;
-(void)setFetchExecutor:(_REMFetchExecutor *)arg1 ;
-(_REMFetchExecutor *)fetchExecutor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

