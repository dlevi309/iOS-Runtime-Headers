/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRISystemCovariateProviding.h>

@class TRISystemConfiguration, NSDictionary;

@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding> {

	TRISystemConfiguration* _sysConfig;
	NSDictionary* _dictionary;

}
-(id)dictionary;
-(id)objectForKey:(id)arg1 ;
-(id)initWithPaths:(id)arg1 ;
-(id)tri_contextValueWithName:(id)arg1 ;
-(id)getContextValueWithName:(id)arg1 ;
@end

