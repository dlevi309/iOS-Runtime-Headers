/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber, NSArray;

@interface _ATXAppInfo : NSObject <NSCopying> {

	BOOL _isExtension;
	BOOL _isEnterpriseApp;
	NSString* _bundleId;
	NSDate* _installDate;
	NSDate* _lastLaunch;
	NSDate* _lastSpotlightLaunch;
	NSNumber* _averageSecondsBetweenLaunches;
	NSNumber* _medianSecondsBetweenLaunches;
	NSNumber* _genreId;
	NSArray* _subGenreIds;
	NSNumber* _app2VecCluster;

}

@property (nonatomic,copy) NSString * bundleId;                                   //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL isExtension;                                    //@synthesize isExtension=_isExtension - In the implementation block
@property (assign,nonatomic) BOOL isEnterpriseApp;                                //@synthesize isEnterpriseApp=_isEnterpriseApp - In the implementation block
@property (nonatomic,copy) NSDate * installDate;                                  //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,copy) NSDate * lastLaunch;                                   //@synthesize lastLaunch=_lastLaunch - In the implementation block
@property (nonatomic,copy) NSDate * lastSpotlightLaunch;                          //@synthesize lastSpotlightLaunch=_lastSpotlightLaunch - In the implementation block
@property (nonatomic,copy) NSNumber * averageSecondsBetweenLaunches;              //@synthesize averageSecondsBetweenLaunches=_averageSecondsBetweenLaunches - In the implementation block
@property (nonatomic,copy) NSNumber * medianSecondsBetweenLaunches;               //@synthesize medianSecondsBetweenLaunches=_medianSecondsBetweenLaunches - In the implementation block
@property (nonatomic,copy) NSNumber * genreId;                                    //@synthesize genreId=_genreId - In the implementation block
@property (nonatomic,copy) NSArray * subGenreIds;                                 //@synthesize subGenreIds=_subGenreIds - In the implementation block
@property (nonatomic,copy) NSNumber * app2VecCluster;                             //@synthesize app2VecCluster=_app2VecCluster - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(BOOL)isExtension;
-(void)setGenreId:(NSNumber *)arg1 ;
-(void)setApp2VecCluster:(NSNumber *)arg1 ;
-(NSNumber *)genreId;
-(NSNumber *)app2VecCluster;
-(void)setMedianSecondsBetweenLaunches:(NSNumber *)arg1 ;
-(void)setAverageSecondsBetweenLaunches:(NSNumber *)arg1 ;
-(NSNumber *)medianSecondsBetweenLaunches;
-(NSNumber *)averageSecondsBetweenLaunches;
-(id)initWithBundleId:(id)arg1 isExtension:(BOOL)arg2 isEnterpriseApp:(BOOL)arg3 installDate:(id)arg4 lastLaunch:(id)arg5 lastSpotlightLaunch:(id)arg6 averageSecondsBetweenLaunches:(id)arg7 medianSecondsBetweenLaunches:(id)arg8 genreId:(id)arg9 subGenreIds:(id)arg10 app2VecCluster:(id)arg11 ;
-(void)setIsExtension:(BOOL)arg1 ;
-(BOOL)isEnterpriseApp;
-(void)setIsEnterpriseApp:(BOOL)arg1 ;
-(NSDate *)lastLaunch;
-(void)setLastLaunch:(NSDate *)arg1 ;
-(NSDate *)lastSpotlightLaunch;
-(void)setLastSpotlightLaunch:(NSDate *)arg1 ;
-(NSArray *)subGenreIds;
-(void)setSubGenreIds:(NSArray *)arg1 ;
@end

