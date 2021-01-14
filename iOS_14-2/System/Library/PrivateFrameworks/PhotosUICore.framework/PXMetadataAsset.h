/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSDate, CLLocation;


@protocol PXMetadataAsset <NSObject>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL cloudIsDeletable; 
@optional
-(BOOL)cloudIsDeletable;

@required
-(CLLocation *)location;
-(NSDate *)creationDate;

@end

