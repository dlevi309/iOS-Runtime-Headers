/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIUserCovariateProviding.h>

@class TRIServerContext;

@interface TRIUserCovariates : NSObject <TRIUserCovariateProviding> {

	TRIServerContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(id)_applicationRecordForBundleId:(id)arg1 ;
-(id)tri_shortVersionStringForBundleId:(id)arg1 ;
-(id)tri_versionForBundleId:(id)arg1 ;
-(id)tri_hasApplicationWithBundleId:(id)arg1 ;
-(id)tri_versionStringForBundleId:(id)arg1 ;
-(id)tri_majorVersionForBundleId:(id)arg1 ;
-(id)tri_minorVersionForBundleId:(id)arg1 ;
-(id)tri_patchVersionForBundleId:(id)arg1 ;
-(id)tri_versionForBundleId:(id)arg1 compareToString:(id)arg2 ;
@end

