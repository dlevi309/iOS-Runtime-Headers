/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDatabaseCorruptionTTRPromptDataSource.h>

@class HDProfile, NSString;

@interface _HDDefaultDatabaseCorruptionDataSource : NSObject <HDDatabaseCorruptionTTRPromptDataSource> {

	HDProfile* _profile;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)profileIdentifier;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)isAppleInternalInstall;
-(id)currentOSBuild;
-(void)persistObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isTestingDevice;
-(id)currentDatabaseIdentifier;
-(id)persistedStringForKey:(id)arg1 ;
-(id)persistedDictionaryForKey:(id)arg1 ;
@end

