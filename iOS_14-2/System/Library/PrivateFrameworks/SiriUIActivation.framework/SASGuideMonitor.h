/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

