/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLDetectedFace, NSData;

@interface PLDetectedFaceprint : PLManagedObject

@property (nonatomic,retain) PLDetectedFace * face; 
@property (assign,nonatomic) int faceprintVersion; 
@property (nonatomic,retain) NSData * data; 
+(id)entityName;
@end

