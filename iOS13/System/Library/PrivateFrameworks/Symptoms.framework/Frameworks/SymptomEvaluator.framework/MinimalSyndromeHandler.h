/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SyndromeHandlerProtocol.h>

@class NSString, ManagedEventHandler;

@interface MinimalSyndromeHandler : NSObject <SyndromeHandlerProtocol> {

	NSString* _syndromeName;
	char* _syndromeUTF8Name;
	ManagedEventHandler* _eventHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)getHandlerByName:(id)arg1 ;
-(NSString *)description;
-(void)didReceiveSyndrome:(id)arg1 ;
@end

