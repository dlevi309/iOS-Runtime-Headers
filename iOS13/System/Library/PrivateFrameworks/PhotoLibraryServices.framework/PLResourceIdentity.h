/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLResourceIdentity <NSObject>
@property (nonatomic,readonly) unsigned resourceType; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@required
-(unsigned)version;
-(unsigned)resourceType;
-(unsigned)recipeID;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;

@end

