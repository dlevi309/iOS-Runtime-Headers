/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/_CNHandleStringClassificationStrategy.h>

@protocol _CNHandleStringClassificationStrategy;
@class NSString;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy> {

	id<_CNHandleStringClassificationStrategy> _strategy;
	id<_CNHandleStringClassificationStrategy> _assistingStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithStrategy:(id)arg1 ;
-(unsigned long long)classificationOfHandleString:(id)arg1 ;
-(void)makeAssistingStrategyIfNecessary;
@end

