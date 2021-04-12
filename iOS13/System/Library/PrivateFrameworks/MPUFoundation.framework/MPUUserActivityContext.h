/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying> {

	NSArray* _containerItems;
	long long _originatorType;
	long long _originatorVersion;

}

@property (nonatomic,copy,readonly) NSArray * containerItems;                 //@synthesize containerItems=_containerItems - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) long long originatorType;                      //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) long long originatorVersion;                   //@synthesize originatorVersion=_originatorVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(long long)originatorType;
-(NSArray *)containerItems;
-(long long)originatorVersion;
-(id)containerItemFollowingContainerItem:(id)arg1 ;
-(id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(id)contextByRemovingContainerItem:(id)arg1 ;
@end

