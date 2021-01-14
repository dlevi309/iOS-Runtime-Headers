/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSNotificationCenter, NSSet, NSString;

@interface AlgosScoreHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {

	BOOL active;
	NSNotificationCenter* notificationCenter;
	NSSet* whitelistedBundleIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(int)configureInstance:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)processEventFor:(id)arg1 withScore:(double)arg2 ;
@end

