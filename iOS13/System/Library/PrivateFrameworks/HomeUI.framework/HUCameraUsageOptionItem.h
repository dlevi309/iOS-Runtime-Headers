/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HUCameraUsageOptionItem : HFItem {

	BOOL _updateInProgress;
	unsigned long long _presence;
	unsigned long long _usage;
	unsigned long long _sortOrder;
	NSSet* _cameraProfiles;

}

@property (nonatomic,readonly) unsigned long long presence;                //@synthesize presence=_presence - In the implementation block
@property (nonatomic,readonly) unsigned long long usage;                   //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) unsigned long long sortOrder;               //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) NSString * privacyDescription; 
@property (assign,nonatomic) BOOL updateInProgress;                        //@synthesize updateInProgress=_updateInProgress - In the implementation block
+(unsigned long long)sortOrderForUsage:(unsigned long long)arg1 ;
-(unsigned long long)usage;
-(unsigned long long)sortOrder;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(NSString *)privacyDescription;
-(NSSet *)cameraProfiles;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)updateInProgress;
-(unsigned long long)presence;
-(id)initWithPresence:(unsigned long long)arg1 cameraUsage:(unsigned long long)arg2 cameraProfiles:(id)arg3 ;
@end

