/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFetchedResultsSectionInfo.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying> {

	NSString* _indexTitle;
	NSString* _name;
	unsigned long long _numberOfObjects;
	NSArray* _objects;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                           //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
-(NSArray *)objects;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(NSString *)indexTitle;
-(unsigned long long)numberOfObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

