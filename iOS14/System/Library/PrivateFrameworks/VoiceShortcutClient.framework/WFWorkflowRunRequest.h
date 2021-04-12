/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWorkflowRunDescriptor, NSString, NSDictionary, NSData, WFContentCollection;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding> {

	BOOL _isAutomationSuggestion;
	WFWorkflowRunDescriptor* _descriptor;
	unsigned long long _presentationMode;
	NSString* _runSource;
	NSString* _automationType;
	NSString* _trialID;
	NSDictionary* _listenerEndpoints;
	NSData* _archivedInput;
	WFContentCollection* _cachedInput;

}

@property (nonatomic,readonly) NSData * archivedInput;                            //@synthesize archivedInput=_archivedInput - In the implementation block
@property (nonatomic,retain) WFContentCollection * cachedInput;                   //@synthesize cachedInput=_cachedInput - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;               //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,copy) NSString * runSource;                                  //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * automationType;                             //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL isAutomationSuggestion;                         //@synthesize isAutomationSuggestion=_isAutomationSuggestion - In the implementation block
@property (nonatomic,copy) NSString * trialID;                                    //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,copy) NSDictionary * listenerEndpoints;                      //@synthesize listenerEndpoints=_listenerEndpoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)trialID;
-(WFWorkflowRunDescriptor *)descriptor;
-(void)setTrialID:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)presentationMode;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)runSource;
-(id)initWithDescriptor:(id)arg1 input:(id)arg2 presentationMode:(unsigned long long)arg3 ;
-(void)getInputWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRunSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(BOOL)isAutomationSuggestion;
-(NSDictionary *)listenerEndpoints;
-(void)setIsAutomationSuggestion:(BOOL)arg1 ;
-(void)setListenerEndpoints:(NSDictionary *)arg1 ;
-(NSData *)archivedInput;
-(WFContentCollection *)cachedInput;
-(void)setCachedInput:(WFContentCollection *)arg1 ;
@end

