/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldIgnoreField;
	BOOL _foundExplicitlyRequestedPass;
	NSArray* _associatedPassIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * associatedPassIdentifiers;              //@synthesize associatedPassIdentifiers=_associatedPassIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreField;                                //@synthesize shouldIgnoreField=_shouldIgnoreField - In the implementation block
@property (nonatomic,readonly) BOOL foundExplicitlyRequestedPass;                     //@synthesize foundExplicitlyRequestedPass=_foundExplicitlyRequestedPass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(BOOL)arg2 foundExplicitlyRequestedPass:(BOOL)arg3 ;
-(NSArray *)associatedPassIdentifiers;
-(BOOL)shouldIgnoreField;
-(BOOL)foundExplicitlyRequestedPass;
@end

