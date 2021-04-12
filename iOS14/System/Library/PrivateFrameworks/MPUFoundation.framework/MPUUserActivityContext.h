/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)dataRepresentation;
-(long long)originatorType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)containerItems;
-(long long)originatorVersion;
-(id)containerItemFollowingContainerItem:(id)arg1 ;
-(id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(id)contextByRemovingContainerItem:(id)arg1 ;
@end

