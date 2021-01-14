/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject> {

	NSString* _name;
	NSString* _keyPath;
	NSArray* _groups;
	NSArray* _settings;

}

@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * keyPath;                                     //@synthesize keyPath=_keyPath - In the implementation block
@property (copy,readonly) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (copy,readonly) NSArray * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupsWithArrayRepresenation:(id)arg1 parentKeyPath:(id)arg2 ;
+(id)groupWithDictonaryRepresentation:(id)arg1 parentKeyPath:(id)arg2 ;
-(NSArray *)groups;
-(NSString *)name;
-(NSArray *)settings;
-(NSString *)propertyDescription;
-(NSString *)keyPath;
-(id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 ;
-(id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 parentKeyPath:(id)arg4 ;
-(id)modelsWithParentIdentifier:(id)arg1 ;
@end

