/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableSet, REDonatedAction, NSSet;

@interface _REActionValue : NSObject {

	NSMutableSet* _mutableUUIDs;
	REDonatedAction* _action;

}

@property (nonatomic,readonly) REDonatedAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSSet * uuids; 
-(id)initWithAction:(id)arg1 ;
-(REDonatedAction *)action;
-(void)addAction:(id)arg1 ;
-(NSSet *)uuids;
-(void)removeActionWithUUID:(id)arg1 ;
@end

