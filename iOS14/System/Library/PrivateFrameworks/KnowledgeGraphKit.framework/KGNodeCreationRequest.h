/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/

#import <KnowledgeGraphKit/KGNodeChangeRequest.h>

@class NSArray, NSNumber, NSDictionary, KGNodePlaceholder;

@interface KGNodeCreationRequest : KGNodeChangeRequest {

	NSArray* _labels;
	NSNumber* _weight;
	NSDictionary* _properties;
	KGNodePlaceholder* _placeholderForNode;

}

@property (nonatomic,readonly) NSArray * labels;                                    //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) KGNodePlaceholder * placeholderForNode;              //@synthesize placeholderForNode=_placeholderForNode - In the implementation block
+(id)creationRequestWithLabels:(id)arg1 weight:(id)arg2 properties:(id)arg3 ;
-(id)properties;
-(void)setWeight:(id)arg1 ;
-(NSArray *)labels;
-(id)weight;
-(void)setProperties:(id)arg1 ;
-(KGNodePlaceholder *)placeholderForNode;
@end

