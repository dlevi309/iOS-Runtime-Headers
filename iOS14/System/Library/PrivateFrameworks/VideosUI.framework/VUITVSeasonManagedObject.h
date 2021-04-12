/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet, VUITVSeriesManagedObject;

@interface VUITVSeasonManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * canonicalID; 
@property (nonatomic,copy) NSNumber * seasonNumber; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSSet * episodes; 
@property (nonatomic,retain) VUITVSeriesManagedObject * series; 
+(id)fetchRequest;
@end

