/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject {

	NSString* _associatedAppIdentifier;
	NSString* _partnerIdentifier;
	NSString* _partnerName;
	NSSet* _terminalCriteria;

}

@property (nonatomic,copy,readonly) NSString * associatedAppIdentifier;              //@synthesize associatedAppIdentifier=_associatedAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerIdentifier;                    //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName;                          //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * terminalCriteria;                        //@synthesize terminalCriteria=_terminalCriteria - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(NSString *)associatedAppIdentifier;
-(NSString *)partnerName;
-(NSSet *)terminalCriteria;
@end

