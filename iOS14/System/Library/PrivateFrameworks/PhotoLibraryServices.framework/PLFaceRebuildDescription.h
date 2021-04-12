/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLFaceRebuildDescription <NSObject>
@property (nonatomic,readonly) double centerX; 
@property (nonatomic,readonly) double centerY; 
@property (nonatomic,readonly) double size; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isManual,nonatomic,readonly) BOOL manual; 
@property (getter=isRepresentative,nonatomic,readonly) BOOL representative; 
@property (nonatomic,readonly) int nameSource; 
@property (nonatomic,readonly) int cloudNameSource; 
@property (getter=isClusterRejected,nonatomic,readonly) BOOL clusterRejected; 
@required
-(BOOL)isHidden;
-(double)centerY;
-(double)size;
-(double)centerX;
-(BOOL)isManual;
-(int)nameSource;
-(BOOL)isRepresentative;
-(int)cloudNameSource;
-(BOOL)isClusterRejected;

@end

