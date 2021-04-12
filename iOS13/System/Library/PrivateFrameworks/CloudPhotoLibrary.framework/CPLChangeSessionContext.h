/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding> {

	unsigned long long _estimatedInitialSizeForLocalLibrary;
	unsigned long long _estimatedInitialAssetCountForLocalLibrary;
	CPLResetTracker* _resetTracker;

}

@property (assign,nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary;                    //@synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary;              //@synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary - In the implementation block
@property (nonatomic,retain) CPLResetTracker * resetTracker;                                            //@synthesize resetTracker=_resetTracker - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEstimatedInitialAssetCountForLocalLibrary:(unsigned long long)arg1 ;
-(void)setEstimatedInitialSizeForLocalLibrary:(unsigned long long)arg1 ;
-(unsigned long long)estimatedInitialSizeForLocalLibrary;
-(unsigned long long)estimatedInitialAssetCountForLocalLibrary;
-(CPLResetTracker *)resetTracker;
-(void)setResetTracker:(CPLResetTracker *)arg1 ;
@end

