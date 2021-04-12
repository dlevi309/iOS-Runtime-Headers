/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityManager.h>

@protocol SXActionActivityManager <NSObject>
@required
-(id)activityGroupForAction:(id)arg1;
-(id)previewActivityForAction:(id)arg1;
-(void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2;

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
-(NSMutableDictionary *)activityProviders;
-(id)activityGroupForAction:(id)arg1 ;
-(id)previewActivityForAction:(id)arg1 ;
-(id)activityProviderForAction:(id)arg1 ;
-(void)registerActionActivityProvider:(id)arg1 actionType:(id)arg2 ;
@end

