/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDataObserver.h>

@class HDProfile, NSString;

@interface HDSeriesQuantityEventObserver : NSObject <HDDataObserver> {

	HDProfile* _profile;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_freezeSeriesForType:(id)arg1 ;
@end

