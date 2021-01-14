/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCSingleTagFeedDescriptor.h>

@interface FCTestFeedDescriptor : FCSingleTagFeedDescriptor {

	BOOL _disableGroupMerging;
	BOOL _disableFiltering;
	BOOL _enableSingletonGroups;

}

@property (assign,nonatomic) BOOL disableGroupMerging;                //@synthesize disableGroupMerging=_disableGroupMerging - In the implementation block
@property (assign,nonatomic) BOOL disableFiltering;                   //@synthesize disableFiltering=_disableFiltering - In the implementation block
@property (assign,nonatomic) BOOL enableSingletonGroups;              //@synthesize enableSingletonGroups=_enableSingletonGroups - In the implementation block
+(id)descriptorWithContext:(id)arg1 ;
+(id)descriptorWithContext:(id)arg1 tag:(id)arg2 ;
-(BOOL)disableGroupMerging;
-(BOOL)disableFiltering;
-(void)setDisableFiltering:(BOOL)arg1 ;
-(BOOL)enableSingletonGroups;
-(void)setEnableSingletonGroups:(BOOL)arg1 ;
-(void)setDisableGroupMerging:(BOOL)arg1 ;
-(id)allEmitterClasses;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 forYouConfig:(id)arg2 ;
@end

