/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)linkingObjectsProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RLMLinkingObjects *)workflows;
-(long long)backgroundColorValue;
-(long long)glyphNumber;
-(void)setBackgroundColorValue:(long long)arg1 ;
-(void)setGlyphNumber:(long long)arg1 ;
-(NSData *)customImageData;
-(void)setCustomImageData:(NSData *)arg1 ;
@end

