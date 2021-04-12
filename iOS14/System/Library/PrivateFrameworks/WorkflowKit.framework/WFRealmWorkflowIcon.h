/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, RLMLinkingObjects;

@interface WFRealmWorkflowIcon : RLMObject <NSCopying> {

	long long _backgroundColorValue;
	long long _glyphNumber;
	NSData* _customImageData;
	RLMLinkingObjects* _workflows;

}

@property (assign,nonatomic) long long backgroundColorValue;              //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (assign,nonatomic) long long glyphNumber;                       //@synthesize glyphNumber=_glyphNumber - In the implementation block
@property (nonatomic,copy) NSData * customImageData;                      //@synthesize customImageData=_customImageData - In the implementation block
@property (readonly) RLMLinkingObjects * workflows;                       //@synthesize workflows=_workflows - In the implementation block
+(id)className;
+(id)defaultPropertyValues;
+(id)requiredProperties;
+(id)linkingObjectsProperties;
-(void)setBackgroundColorValue:(long long)arg1 ;
-(long long)backgroundColorValue;
-(RLMLinkingObjects *)workflows;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)customImageData;
-(void)setCustomImageData:(NSData *)arg1 ;
-(void)setGlyphNumber:(long long)arg1 ;
-(long long)glyphNumber;
@end

