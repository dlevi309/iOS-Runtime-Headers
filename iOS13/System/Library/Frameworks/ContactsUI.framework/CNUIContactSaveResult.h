/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class CNMutableContact, NSArray;

@interface CNUIContactSaveResult : NSObject {

	BOOL _success;
	CNMutableContact* _contact;
	NSArray* _identifiersOfIssuedSaveRequests;

}

@property (nonatomic,readonly) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) CNMutableContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSArray * identifiersOfIssuedSaveRequests;              //@synthesize identifiersOfIssuedSaveRequests=_identifiersOfIssuedSaveRequests - In the implementation block
-(CNMutableContact *)contact;
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3 ;
-(NSArray *)identifiersOfIssuedSaveRequests;
@end

