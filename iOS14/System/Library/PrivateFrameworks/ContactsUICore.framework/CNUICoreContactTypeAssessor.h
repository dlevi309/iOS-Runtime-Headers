/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

