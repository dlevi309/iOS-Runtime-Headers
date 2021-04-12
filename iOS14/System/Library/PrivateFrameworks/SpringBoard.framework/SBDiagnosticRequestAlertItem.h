/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, NSArray;

@interface SBDiagnosticRequestAlertItem : SBAlertItem {

	/*^block*/id _completionBlock;
	NSString* _title;
	NSString* _message;
	NSString* _radarTitle;
	NSString* _radarDescription;
	NSArray* _radarAttachments;
	long long _radarClassification;
	long long _radarReproducibility;

}

@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * radarTitle;                         //@synthesize radarTitle=_radarTitle - In the implementation block
@property (nonatomic,copy) NSString * radarDescription;                   //@synthesize radarDescription=_radarDescription - In the implementation block
@property (nonatomic,copy) NSArray * radarAttachments;                    //@synthesize radarAttachments=_radarAttachments - In the implementation block
@property (assign,nonatomic) long long radarClassification;               //@synthesize radarClassification=_radarClassification - In the implementation block
@property (assign,nonatomic) long long radarReproducibility;              //@synthesize radarReproducibility=_radarReproducibility - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSString *)message;
-(void)performUnlockAction;
-(BOOL)reappearsAfterLock;
-(void)setTitle:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)reappearsAfterUnlock;
-(void)setRadarClassification:(long long)arg1 ;
-(NSString *)radarTitle;
-(BOOL)shouldShowInLockScreen;
-(void)_fileRadar;
-(long long)radarClassification;
-(NSString *)radarDescription;
-(void)setRadarDescription:(NSString *)arg1 ;
-(void)setRadarTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setRadarAttachments:(NSArray *)arg1 ;
-(NSArray *)radarAttachments;
-(long long)radarReproducibility;
-(id)_yesButtonTitle;
-(id)_noButtonTitle;
-(id)_stringFromClassification:(long long)arg1 ;
-(id)_stringFromReproducibility:(long long)arg1 ;
-(void)setRadarReproducibility:(long long)arg1 ;
@end

