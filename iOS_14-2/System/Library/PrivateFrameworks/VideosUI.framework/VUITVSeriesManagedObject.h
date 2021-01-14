/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

