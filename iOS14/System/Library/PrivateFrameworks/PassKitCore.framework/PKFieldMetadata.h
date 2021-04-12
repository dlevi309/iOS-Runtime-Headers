/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldIgnoreField;
-(id)initWithAssociatedPassIdentifiers:(id)arg1 shouldIgnoreField:(BOOL)arg2 foundExplicitlyRequestedPass:(BOOL)arg3 ;
-(NSArray *)associatedPassIdentifiers;
-(BOOL)foundExplicitlyRequestedPass;
@end

