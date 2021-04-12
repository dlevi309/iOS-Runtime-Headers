/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <libobjc.A.dylib/PHShare.h>
@class NSURL, NSDate;


@protocol PHShare <NSObject>
@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) short publicPermission; 
@property (nonatomic,readonly) unsigned short trashedState; 
@property (nonatomic,readonly) short publishState; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@required
-(NSURL *)shareURL;
-(short)publicPermission;
-(unsigned short)trashedState;
-(NSDate *)creationDate;
-(short)publishState;
-(NSDate *)expiryDate;
-(unsigned short)status;

@end


@class NSURL, NSDate, NSString;

@interface PHShare : NSObject <PHShare> {

	NSString* _singletonPhotoLibraryPath;

}

@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) short publicPermission; 
@property (nonatomic,readonly) unsigned short trashedState; 
@property (nonatomic,readonly) short publishState; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)PHShareErrorFromError:(id)arg1 ;
+(void)acceptShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)publishShareWithUUID:(id)arg1 photoLibrary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
@end

