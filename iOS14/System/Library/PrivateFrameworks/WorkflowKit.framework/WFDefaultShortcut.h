/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSString;

@interface WFDefaultShortcut : NSObject {

	NSString* _identifier;

}

@property (getter=isAlwaysVisibleOnWatch,nonatomic,readonly) BOOL alwaysVisibleOnWatch; 
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
+(id)allDefaultShortcuts;
-(id)description;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)workflowRecordWithError:(id*)arg1 ;
-(long long)relevanceWithContext:(id)arg1 ;
-(BOOL)isAlwaysVisibleOnWatch;
@end

