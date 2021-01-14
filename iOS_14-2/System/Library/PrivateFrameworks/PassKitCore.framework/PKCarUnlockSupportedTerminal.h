/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray, NSString, NSSet;

@interface PKCarUnlockSupportedTerminal : NSObject {

	NSArray* _associatedApplicationIdentifiers;
	NSString* _partnerIdentifier;
	NSString* _partnerName;
	NSSet* _terminalCriteria;

}

@property (nonatomic,copy,readonly) NSArray * associatedApplicationIdentifiers;              //@synthesize associatedApplicationIdentifiers=_associatedApplicationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerIdentifier;                            //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName;                                  //@synthesize partnerName=_partnerName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * terminalCriteria;                                //@synthesize terminalCriteria=_terminalCriteria - In the implementation block
-(NSSet *)terminalCriteria;
-(NSString *)partnerName;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(id)description;
-(NSArray *)associatedApplicationIdentifiers;
@end

