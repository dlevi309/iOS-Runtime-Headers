/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString, NSData, NSDictionary;

@interface WFSerializedAccessResourcePerWorkflowState : NSObject {

	NSString* _identifier;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 ;
@end

