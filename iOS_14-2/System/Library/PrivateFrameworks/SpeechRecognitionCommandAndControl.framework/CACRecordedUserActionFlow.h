/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CACRecordedUserActionFlow : NSObject <NSSecureCoding> {

	NSArray* _tasks;
	NSDictionary* _environmentSettings;
	NSMutableDictionary* _orignalEnvironmentSettings;
	long long _executingTaskIndex;
	BOOL _skipNextAction;
	BOOL _isExecuting;
	BOOL _isCancelled;
	NSString* _identifier;

}

@property (retain) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSArray * userActions; 
@property (assign) BOOL skipNextAction;                  //@synthesize skipNextAction=_skipNextAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)userActions;
-(NSString *)identifier;
-(id)plistDescription;
-(id)initWithUserActions:(id)arg1 ;
-(void)beginExecutingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelExecution;
-(void)setSkipNextAction:(BOOL)arg1 ;
-(BOOL)doesNextSpokenCommandMatchIdentifier:(id)arg1 ;
-(void)_configureEnvironment;
-(void)_executeNextActionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_exitFlowWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_restoreEnvironment;
-(BOOL)skipNextAction;
@end

