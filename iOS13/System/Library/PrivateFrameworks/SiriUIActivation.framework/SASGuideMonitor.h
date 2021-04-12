/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
*/

#import <libobjc.A.dylib/AFUISiriLanguageDelegate.h>

@class AFUISiriLanguage, NSDate, NSString;

@interface SASGuideMonitor : NSObject <AFUISiriLanguageDelegate> {

	AFUISiriLanguage* _language;
	NSDate* _lastAppUpdateTimestamp;
	NSDate* _lastGuideCheck;

}

@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSDate * lastAppUpdateTimestamp;                             //@synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp - In the implementation block
@property (nonatomic,retain) NSDate * lastGuideCheck;                                     //@synthesize lastGuideCheck=_lastGuideCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitor;
-(id)init;
-(id)_language;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)_applicationsDidChange;
-(void)checkForGuideUpdatesIfNecessary;
-(NSDate *)lastAppUpdateTimestamp;
-(void)setLastAppUpdateTimestamp:(NSDate *)arg1 ;
-(NSDate *)lastGuideCheck;
-(void)setLastGuideCheck:(NSDate *)arg1 ;
@end

