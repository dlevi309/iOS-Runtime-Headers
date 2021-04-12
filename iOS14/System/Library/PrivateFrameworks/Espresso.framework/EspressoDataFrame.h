/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSMutableDictionary, NSString, NSArray;

@interface EspressoDataFrame : NSObject {

	NSMutableDictionary* _inputAttachments;
	NSMutableDictionary* _outputAttachments;
	NSMutableDictionary* _groundTruthAttachments;
	NSString* _function_name;

}

@property (retain) NSMutableDictionary * inputAttachments;                    //@synthesize inputAttachments=_inputAttachments - In the implementation block
@property (retain) NSMutableDictionary * outputAttachments;                   //@synthesize outputAttachments=_outputAttachments - In the implementation block
@property (retain) NSMutableDictionary * groundTruthAttachments;              //@synthesize groundTruthAttachments=_groundTruthAttachments - In the implementation block
@property (retain) NSString * function_name;                                  //@synthesize function_name=_function_name - In the implementation block
@property (readonly) NSArray * inputAttachmentNames; 
@property (readonly) NSArray * outputAttachmentNames; 
@property (readonly) NSArray * groundTruthAttachmentNames; 
-(id)init;
-(id)getInputAttachment:(id)arg1 ;
-(id)getOutputAttachment:(id)arg1 ;
-(id)getGroundTruthAttachment:(id)arg1 ;
-(id)getFunctionName;
-(NSMutableDictionary *)inputAttachments;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(NSArray *)inputAttachmentNames;
-(NSArray *)groundTruthAttachmentNames;
-(NSArray *)outputAttachmentNames;
-(void)setInputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outputAttachments;
-(void)setOutputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)groundTruthAttachments;
-(void)setGroundTruthAttachments:(NSMutableDictionary *)arg1 ;
-(NSString *)function_name;
-(void)setFunction_name:(NSString *)arg1 ;
@end

