/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/SSRAssetProviding.h>

@class NSString;

@interface SSRTrialAssetProvider : NSObject <SSRAssetProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)getAssetProviderType;
-(id)installedAssetOfType:(unsigned long long)arg1 forLanguageCode:(id)arg2 ;
-(void)reloadForLocale:(id)arg1 ;
@end

