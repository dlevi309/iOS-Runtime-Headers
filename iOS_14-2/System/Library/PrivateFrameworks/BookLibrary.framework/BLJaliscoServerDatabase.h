/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <CoreData/NSManagedObject.h>

@class NSString, BLJaliscoServerInfo, NSSet;

@interface BLJaliscoServerDatabase : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) BLJaliscoServerInfo * server; 
@property (nonatomic,retain) NSSet * items; 
-(id)initIntoManagedObjectContext:(id)arg1 ;
@end

