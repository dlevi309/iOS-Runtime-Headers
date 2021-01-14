/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSArray;


@protocol PXGAXGroup <PXGAXElement>
@property (nonatomic,readonly) id<PXGAXGroupSource> axGroupSource; 
@property (nonatomic,readonly) id<PXGAXInfoSource> axInfoSource; 
@property (nonatomic,readonly) id<PXGAXResponder> axNextResponder; 
@property (nonatomic,readonly) long long axRole; 
@property (nonatomic,readonly) id<PXGAXGroup> axParent; 
@property (nonatomic,readonly) NSArray * axSubgroups; 
@property (nonatomic,readonly) NSArray * axLeafs; 
@required
-(id<PXGAXInfoSource>)axInfoSource;
-(long long)axRole;
-(NSArray *)axLeafs;
-(id<PXGAXGroup>)axParent;
-(id<PXGAXGroupSource>)axGroupSource;
-(id<PXGAXResponder>)axNextResponder;
-(NSArray *)axSubgroups;

@end

