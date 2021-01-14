/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXFilterState <NSCopying>
@property (nonatomic,readonly) BOOL isFiltering; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedFooterDescription; 
@required
-(NSString *)localizedDescription;
-(NSString *)localizedFooterDescription;
-(id)predicateForUseCase:(unsigned long long)arg1;
-(BOOL)isFiltering;

@end

