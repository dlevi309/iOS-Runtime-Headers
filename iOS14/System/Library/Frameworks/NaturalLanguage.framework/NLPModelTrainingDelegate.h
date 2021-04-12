/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/

#import <libobjc.A.dylib/NLModelTrainerDelegate.h>

@class NSString;

@interface NLPModelTrainingDelegate : NSObject <NLModelTrainerDelegate> {

	/*^block*/id _logHandler;
	BOOL _stop;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modelTrainer:(id)arg1 logMessage:(id)arg2 ;
-(BOOL)modelTrainerShouldStop:(id)arg1 ;
-(id)initWithLogHandler:(/*^block*/id)arg1 ;
@end

