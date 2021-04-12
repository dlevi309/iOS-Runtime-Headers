/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface VUITVSeriesManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * canonicalID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSSet * episodes; 
@property (nonatomic,retain) NSSet * imageInfos; 
@property (nonatomic,retain) NSSet * seasons; 
+(id)fetchRequest;
@end

