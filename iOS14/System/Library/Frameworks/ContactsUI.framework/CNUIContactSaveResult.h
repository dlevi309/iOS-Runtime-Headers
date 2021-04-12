/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)success;
-(CNMutableContact *)contact;
-(id)initWithSuccess:(BOOL)arg1 contact:(id)arg2 identifiersOfIssuedSaveRequests:(id)arg3 ;
-(NSArray *)identifiersOfIssuedSaveRequests;
@end

