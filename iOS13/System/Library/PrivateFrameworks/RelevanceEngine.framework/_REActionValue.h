/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableSet, REDonatedAction, NSSet;

@interface _REActionValue : NSObject {

	NSMutableSet* _mutableUUIDs;
	REDonatedAction* _action;

}

@property (nonatomic,readonly) REDonatedAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSSet * uuids; 
-(REDonatedAction *)action;
-(void)addAction:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(NSSet *)uuids;
-(void)removeActionWithUUID:(id)arg1 ;
@end

