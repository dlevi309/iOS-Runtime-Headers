/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

@class NSURL, NSUUID;


@protocol _NSFileBackedFuture
@property (readonly) NSURL * fileURL; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSUUID * UUID; 
@required
-(unsigned long long)fileSize;
-(NSUUID *)UUID;
-(NSURL *)fileURL;

@end

