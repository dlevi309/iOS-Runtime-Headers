/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)dictionaryRepresentation;
-(long long)compare:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

