/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol RERelevanceEnginePreferencesDelegate;
@class NSSet;

@interface RERelevanceEnginePreferences : NSObject <NSCopying> {

	id<RERelevanceEnginePreferencesDelegate> _delegate;
	NSSet* _disabledDataSourceIdentifiers;
	unsigned long long _mode;

}

@property (assign,nonatomic,__weak) id<RERelevanceEnginePreferencesDelegate> delegate; 
@property (nonatomic,copy) NSSet * disabledDataSourceIdentifiers;                                   //@synthesize disabledDataSourceIdentifiers=_disabledDataSourceIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                               //@synthesize mode=_mode - In the implementation block
+(id)defaultPreferences;
-(unsigned long long)mode;
-(id)init;
-(id<RERelevanceEnginePreferencesDelegate>)delegate;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<RERelevanceEnginePreferencesDelegate>)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDisabledDataSourceIdentifiers:(NSSet *)arg1 ;
-(NSSet *)disabledDataSourceIdentifiers;
@end

