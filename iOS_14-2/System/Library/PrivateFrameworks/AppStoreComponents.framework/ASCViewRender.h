/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <libobjc.A.dylib/ASCSignpostGroup.h>

@class NSString;

@interface ASCViewRender : NSObject <ASCSignpostGroup>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)subsystem;
+(id)category;
+(void)resourceRequestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelPresentWithTag:(unsigned long long)arg1 ;
+(void)resourceRequestDidEndWithTag:(unsigned long long)arg1 ;
+(void)pageRequestedWithTag:(unsigned long long)arg1 ;
+(void)pageUserReadyWithTag:(unsigned long long)arg1 ;
+(void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2 ;
+(id)requiredFieldNames;
+(void)overlayRequestedWithTag:(unsigned long long)arg1 ;
+(void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1 ;
+(void)modelPrefetchDidEndWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidBeginWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidEndWithTag:(unsigned long long)arg1 ;
+(void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2 ;
+(void)requestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)requestDidEndWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidBeginWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidEndWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1 ;
@end

