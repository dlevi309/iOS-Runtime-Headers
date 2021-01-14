/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSArray, NSString;

@interface SFSiriDeviceSetupGreetingDetails : NSObject {

	NSArray* _introWordTimings;
	NSString* _dialogAText;
	NSArray* _dialogAWordTimings;
	NSArray* _dialogBPhraseTimings;
	NSArray* _dialogCPhraseTimings;

}

@property (nonatomic,copy) NSArray * introWordTimings;                  //@synthesize introWordTimings=_introWordTimings - In the implementation block
@property (nonatomic,copy) NSString * dialogAText;                      //@synthesize dialogAText=_dialogAText - In the implementation block
@property (nonatomic,copy) NSArray * dialogAWordTimings;                //@synthesize dialogAWordTimings=_dialogAWordTimings - In the implementation block
@property (nonatomic,copy) NSArray * dialogBPhraseTimings;              //@synthesize dialogBPhraseTimings=_dialogBPhraseTimings - In the implementation block
@property (nonatomic,copy) NSArray * dialogCPhraseTimings;              //@synthesize dialogCPhraseTimings=_dialogCPhraseTimings - In the implementation block
-(void)setIntroWordTimings:(NSArray *)arg1 ;
-(void)setDialogAText:(NSString *)arg1 ;
-(void)setDialogAWordTimings:(NSArray *)arg1 ;
-(void)setDialogBPhraseTimings:(NSArray *)arg1 ;
-(void)setDialogCPhraseTimings:(NSArray *)arg1 ;
-(NSArray *)introWordTimings;
-(NSString *)dialogAText;
-(NSArray *)dialogAWordTimings;
-(NSArray *)dialogBPhraseTimings;
-(NSArray *)dialogCPhraseTimings;
@end

