/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFeatures.h>

@protocol SXFeatures <NSObject>
@property (readonly,nonatomic) BOOL newAdsEnabled; 
@required
-(BOOL)newAdsEnabled;

@end


@class NSString;

@interface SXFeatures : NSObject <SXFeatures> {

	BOOL _newAdsEnabled;

}

@property (nonatomic,readonly) BOOL newAdsEnabled;                  //@synthesize newAdsEnabled=_newAdsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)newAdsEnabled;
-(id)initWithNewAdsEnabled:(BOOL)arg1 ;
@end

