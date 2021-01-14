/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityManager.h>

@protocol SXActionActivityManager <NSObject>
@required
-(void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2;
-(id)activityGroupForAction:(id)arg1;
-(id)previewActivityForAction:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface SXActionActivityManager : NSObject <SXActionActivityManager> {

	NSMutableDictionary* _activityProviders;

}

@property (nonatomic,readonly) NSMutableDictionary * activityProviders;              //@synthesize activityProviders=_activityProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)activityProviderForAction:(id)arg1 ;
-(void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2 ;
-(id)activityGroupForAction:(id)arg1 ;
-(NSMutableDictionary *)activityProviders;
-(id)previewActivityForAction:(id)arg1 ;
@end

