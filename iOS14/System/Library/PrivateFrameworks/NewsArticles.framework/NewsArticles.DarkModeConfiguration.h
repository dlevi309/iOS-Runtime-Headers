/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <libobjc.A.dylib/SXDarkModeConfiguration.h>

@class NSDictionary;

@interface NewsArticles.DarkModeConfiguration : NSObject <SXDarkModeConfiguration> {

	 headline;

}

@property (readonly,nonatomic) BOOL autoDarkModeEnabled; 
@property (readonly,nonatomic) unsigned long long inversionBehavior; 
@property (readonly,nonatomic) double saturationThreshold; 
@property (readonly,nonatomic) NSDictionary * colors; 
-(NSDictionary *)colors;
-(BOOL)isAutoDarkModeEnabled;
-(unsigned long long)inversionBehavior;
-(double)saturationThreshold;
-(id)init;
@end

