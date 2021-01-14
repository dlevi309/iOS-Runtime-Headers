/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFWorkflowRecord, NSString;

@interface WFWorkflowCreationOptions : NSObject {

	BOOL _deleted;
	WFWorkflowRecord* _record;
	NSString* _identifier;
	unsigned long long _location;
	NSString* _collectionIdentifier;

}

@property (nonatomic,readonly) WFWorkflowRecord * record;                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long location;                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL deleted;                               //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
-(WFWorkflowRecord *)record;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(id)init;
-(unsigned long long)location;
-(BOOL)deleted;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setDeleted:(BOOL)arg1 ;
@end

