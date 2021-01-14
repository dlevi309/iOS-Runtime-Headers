/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INTask;


@protocol INSetTaskAttributeIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INTask * modifiedTask; 
@property (assign,nonatomic) unsigned long long warnings; 
@required
-(void)setWarnings:(unsigned long long)arg1;
-(INTask *)modifiedTask;
-(void)setModifiedTask:(id)arg1;
-(long long)code;
-(unsigned long long)warnings;

@end

