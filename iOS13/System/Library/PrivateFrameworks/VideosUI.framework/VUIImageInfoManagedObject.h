/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <CoreData/NSManagedObject.h>

@class NSString, VUIImageDataManagedObject;

@interface VUIImageInfoManagedObject : NSManagedObject

@property (assign,nonatomic) double canonicalHeight; 
@property (assign,nonatomic) double canonicalWidth; 
@property (assign,nonatomic) long long imageType; 
@property (nonatomic,copy) NSString * urlFormat; 
@property (nonatomic,retain) VUIImageDataManagedObject * imageData; 
+(id)fetchRequest;
@end

