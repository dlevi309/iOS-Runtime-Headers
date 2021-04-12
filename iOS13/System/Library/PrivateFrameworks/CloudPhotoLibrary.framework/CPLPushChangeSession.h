/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLChangeSession.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(id)shortDescription;
-(void)commitChangeBatch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithLibraryManager:(id)arg1 ;
-(void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(/*^block*/id)arg2 ;
@end

