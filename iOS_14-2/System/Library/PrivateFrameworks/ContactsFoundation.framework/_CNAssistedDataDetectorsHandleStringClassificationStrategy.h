/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)makeAssistingStrategyIfNecessary;
-(unsigned long long)classificationOfHandleString:(id)arg1 ;
@end

