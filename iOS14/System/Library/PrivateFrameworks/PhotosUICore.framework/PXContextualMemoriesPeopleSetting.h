/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXContextualMemoriesSetting.h>

@class NSString, NSArray;

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting> {

	NSArray* _peopleNames;

}

@property (nonatomic,retain) NSArray * peopleNames;                 //@synthesize peopleNames=_peopleNames - In the implementation block
@property (nonatomic,readonly) NSString * headerTitle; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)headerTitle;
-(id)init;
-(void)resetToDefault;
-(void)setPeopleNames:(NSArray *)arg1 ;
-(NSArray *)peopleNames;
-(void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)title;
@end

