/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
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
-(void)dealloc;
-(float)audioLevel;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_assetUpdaterClient;
-(BOOL)supportsPronunciationSessions;
-(void)startPronunciationSession:(id)arg1 resultCallback:(/*^block*/id)arg2 ;
-(void)stopPronunciationSession;
-(void)cancelPronunciationSession;
@end

