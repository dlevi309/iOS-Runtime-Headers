/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NviAssetsProvider.h>

@class NSString;

@interface CSSpeakerIdNviAssetsProvider : NSObject <NviAssetsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * nviConfigRoot; 
@property (nonatomic,readonly) NSString * hepConfigFilepath; 
-(id)initWithTaskIdentifier:(id)arg1 ;
-(float)dirAzimuthEMAParam;
-(BOOL)isDirectionalityLoggingEnabled;
-(id)signalProvidersMapForContext:(id)arg1 ;
-(id)signalProviderToDatasourceMap;
-(BOOL)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1 ;
-(BOOL)isDirectionalityAvailable;
@end

