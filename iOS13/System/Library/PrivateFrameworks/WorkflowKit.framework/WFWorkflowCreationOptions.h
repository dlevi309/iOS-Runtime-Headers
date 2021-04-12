/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFWorkflowRecord, NSString;

@interface WFWorkflowCreationOptions : NSObject {

	BOOL _deleted;
	WFWorkflowRecord* _record;
	NSString* _identifier;
	unsigned long long _location;

}

@property (nonatomic,readonly) WFWorkflowRecord * record;              //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL deleted;                             //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)location;
-(BOOL)deleted;
-(void)setLocation:(unsigned long long)arg1 ;
-(WFWorkflowRecord *)record;
-(id)initWithRecord:(id)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
@end

