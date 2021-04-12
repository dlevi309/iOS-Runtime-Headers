/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
*/

#import <AXSpeechAssetServices/AXUIClientDelegate.h>

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate> {

	BOOL _inSession;
	/*^block*/id _resultCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(float)audioLevel;
-(id)_assetUpdaterClient;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)dealloc;
-(BOOL)supportsPronunciationSessions;
-(void)startPronunciationSession:(id)arg1 resultCallback:(/*^block*/id)arg2 ;
-(void)stopPronunciationSession;
-(void)cancelPronunciationSession;
@end

