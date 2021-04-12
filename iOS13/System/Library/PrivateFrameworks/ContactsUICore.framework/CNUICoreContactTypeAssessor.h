/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject {

	CNFuture* _familyInfoFuture;

}

@property (nonatomic,readonly) CNFuture * familyInfoFuture;              //@synthesize familyInfoFuture=_familyInfoFuture - In the implementation block
+(id)keysToFetch;
-(id)init;
-(id)initWithFamilyInfoFuture:(id)arg1 ;
-(long long)estiamtedTypeOfContact:(id)arg1 ;
-(id)initWithFamilyInfo:(id)arg1 ;
-(CNFuture *)familyInfoFuture;
@end

