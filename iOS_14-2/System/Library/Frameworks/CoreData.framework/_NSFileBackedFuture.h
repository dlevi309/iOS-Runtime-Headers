/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

@class NSURL, NSUUID;


@protocol _NSFileBackedFuture
@property (readonly) NSURL * fileURL; 
@property (readonly) unsigned long long fileSize; 
@property (readonly) NSUUID * UUID; 
@required
-(NSUUID *)UUID;
-(unsigned long long)fileSize;
-(NSURL *)fileURL;

@end

