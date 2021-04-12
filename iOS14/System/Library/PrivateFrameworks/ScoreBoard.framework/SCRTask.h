/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class NSMutableDictionary, SCRSchedulingConfiguration, SCRTaskIdentifier, SCRTaskHandler, SCRTaskTargetConfiguration, NSString;

@interface SCRTask : NSObject <BSDescriptionProviding, NSCopying, SCRSchedulable> {

	NSMutableDictionary* _attributes;
	SCRSchedulingConfiguration* _schedulingConfiguration;
	SCRTaskIdentifier* _identifier;
	SCRTaskHandler* _taskHandler;
	/*^block*/id _completionHandler;
	SCRTaskTargetConfiguration* _targetConfiguration;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) id workItem; 
@property (nonatomic,retain) SCRTaskIdentifier * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SCRTaskHandler * taskHandler;                            //@synthesize taskHandler=_taskHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) SCRSchedulingConfiguration * schedulingConfiguration;              //@synthesize schedulingConfiguration=_schedulingConfiguration - In the implementation block
@property (copy) SCRTaskTargetConfiguration * targetConfiguration;                  //@synthesize targetConfiguration=_targetConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)attributeForKey:(id)arg1 ;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)completionHandler;
-(NSString *)name;
-(NSString *)description;
-(void)setWorkItem:(id)arg1 ;
-(id)workItem;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(void)removeAttributeWithKey:(id)arg1 ;
-(void)setTaskHandler:(SCRTaskHandler *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(SCRTaskIdentifier *)arg1 ;
-(SCRTaskIdentifier *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setSchedulingConfiguration:(SCRSchedulingConfiguration *)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTargetConfiguration:(SCRTaskTargetConfiguration *)arg1 ;
-(void)addAttribute:(id)arg1 withKey:(id)arg2 ;
-(SCRTaskTargetConfiguration *)targetConfiguration;
-(SCRTaskHandler *)taskHandler;
@end

