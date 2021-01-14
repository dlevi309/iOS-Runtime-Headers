/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGConfigurationSource.h>

@class NSUserDefaults, NSString;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource> {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)objectForKey:(id)arg1 ;
@end

