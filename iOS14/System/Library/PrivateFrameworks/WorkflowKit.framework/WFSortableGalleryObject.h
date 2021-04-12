/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

@class NSString;


@protocol WFSortableGalleryObject <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) long long minVersion; 
@property (nonatomic,readonly) NSString * persistentIdentifier; 
@required
-(NSString *)name;
-(NSString *)persistentIdentifier;
-(long long)minVersion;
-(NSString *)language;

@end

