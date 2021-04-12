/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInput/TIUserModel.h>
#import <libobjc.A.dylib/TIKBUserModeling.h>
#import <libobjc.A.dylib/TIKBMetricProviding.h>
#import <libobjc.A.dylib/TIUserModelConfigurationDelegate.h>

@class NSArray, NSString;

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>

@property (nonatomic,readonly) NSArray * kbContexts; 
@property (nonatomic,readonly) NSArray * contexts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userModelWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(id)settingsDictionary;
-(Class)userModelValuesClass;
-(id)durableCounterKeys;
-(void)trackPowerLogIfNecessary;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(void)sessionDidEnd:(id)arg1 aligned:(id)arg2 ;
-(id)valueForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3 ;
-(id)valuesByBucketedWordLengthForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3 ;
-(NSArray *)kbContexts;
-(id)dictForPowerLog;
@end

