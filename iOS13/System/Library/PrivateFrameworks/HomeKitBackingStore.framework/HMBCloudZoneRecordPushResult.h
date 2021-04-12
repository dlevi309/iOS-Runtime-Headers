/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSDictionary, NSError;

@interface HMBCloudZoneRecordPushResult : HMFObject {

	BOOL _fatalError;
	NSSet* _updated;
	NSSet* _deleted;
	NSDictionary* _partialErrors;
	NSDictionary* _conflicts;
	NSError* _error;

}

@property (nonatomic,readonly) NSSet * updated;                           //@synthesize updated=_updated - In the implementation block
@property (nonatomic,readonly) NSSet * deleted;                           //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,readonly) NSDictionary * partialErrors;              //@synthesize partialErrors=_partialErrors - In the implementation block
@property (nonatomic,readonly) NSDictionary * conflicts;                  //@synthesize conflicts=_conflicts - In the implementation block
@property (nonatomic,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL fatalError;                           //@synthesize fatalError=_fatalError - In the implementation block
+(id)pushResultByMergingPushResult:(id)arg1 withPushResult:(id)arg2 ;
-(NSError *)error;
-(NSSet *)deleted;
-(NSSet *)updated;
-(NSDictionary *)conflicts;
-(id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 error:(id)arg4 ;
-(id)initWithUpdated:(id)arg1 deleted:(id)arg2 conflicts:(id)arg3 partialErrors:(id)arg4 fatalError:(BOOL)arg5 error:(id)arg6 ;
-(NSDictionary *)partialErrors;
-(BOOL)fatalError;
@end

