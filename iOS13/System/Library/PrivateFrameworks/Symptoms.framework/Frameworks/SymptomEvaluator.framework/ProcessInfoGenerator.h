/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <libobjc.A.dylib/AdditionalInfoProtocol.h>

@class NSString;

@interface ProcessInfoGenerator : NSObject <ConfigurableObjectProtocol, AdditionalInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(id)generateAdditionalInfo:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(id)generateAdditionalInfo:(id)arg1 ;
@end

