/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>

@class NSString, REMObjectID, NSArray, REMResolutionTokenMap, NSData;

@interface REMSmartListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding> {

	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	BOOL _isPersisted;
	NSString* sortingStyle;
	long long sortingDirection;
	REMObjectID* _objectID;
	NSString* _smartListTag;
	NSArray* _ordering;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;

}

@property (nonatomic,retain) REMObjectID * objectID;                                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * smartListTag;                                   //@synthesize smartListTag=_smartListTag - In the implementation block
@property (nonatomic,retain) NSArray * ordering;                                      //@synthesize ordering=_ordering - In the implementation block
@property (assign,nonatomic) BOOL isPersisted;                                        //@synthesize isPersisted=_isPersisted - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;              //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                         //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
+(BOOL)supportsSecureCoding;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(NSString *)sortingStyle;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(void)setSortingDirection:(long long)arg1 ;
-(NSData *)resolutionTokenMapData;
-(unsigned long long)storeGeneration;
-(REMObjectID *)remObjectID;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(long long)sortingDirection;
-(id)cdKeyToStorageKeyMap;
-(void)setSortingStyle:(NSString *)arg1 ;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)smartListTag;
-(BOOL)isPersisted;
-(REMObjectID *)objectID;
-(id)initWithObjectID:(id)arg1 smartListTag:(id)arg2 ;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(void)setIsPersisted:(BOOL)arg1 ;
-(void)setOrdering:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(NSArray *)ordering;
-(id)initWithCoder:(id)arg1 ;
-(void)setSmartListTag:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

