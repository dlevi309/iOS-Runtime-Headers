/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

