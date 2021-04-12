/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSFetchedResultsSectionInfo.h>

@class NSString, NSArray, NSFetchedResultsController;

@interface _NSDefaultSectionInfo : NSObject <NSFetchedResultsSectionInfo> {

	NSFetchedResultsController* _controller;
	NSString* _name;
	NSString* _indexTitle;
	unsigned long long _sectionOffset;
	unsigned long long _numberOfObjects;
	unsigned long long _oldSectionNumber;
	NSArray* _sectionObjects;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * indexTitle;                           //@synthesize indexTitle=_indexTitle - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfObjects;              //@synthesize numberOfObjects=_numberOfObjects - In the implementation block
@property (nonatomic,readonly) NSArray * objects; 
-(NSArray *)objects;
-(NSString *)name;
-(NSString *)indexTitle;
-(unsigned long long)numberOfObjects;
-(void)dealloc;
@end

