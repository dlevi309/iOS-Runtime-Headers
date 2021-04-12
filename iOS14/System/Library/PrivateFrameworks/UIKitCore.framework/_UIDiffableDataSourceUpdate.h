/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceUpdate.h>
@class NSOrderedSet;


@protocol _UIDiffableDataSourceUpdate <NSObject>
@property (nonatomic,readonly) BOOL isSectionOperation; 
@property (nonatomic,readonly) NSOrderedSet * identifiers; 
@property (nonatomic,readonly) long long action; 
@property (nonatomic,readonly) BOOL isDeleteAll; 
@property (nonatomic,readonly) long long relativePosition; 
@property (nonatomic,readonly) id destinationIdentifier; 
@property (nonatomic,readonly) BOOL destinationIdentifierIsSectionIdentifier; 
@required
-(NSOrderedSet *)identifiers;
-(long long)relativePosition;
-(BOOL)destinationIdentifierIsSectionIdentifier;
-(long long)action;
-(BOOL)isSectionOperation;
-(id)destinationIdentifier;
-(BOOL)isDeleteAll;

@end


@class NSOrderedSet, NSString;

@interface _UIDiffableDataSourceUpdate : NSObject <_UIDiffableDataSourceUpdate> {

	BOOL _isSectionOperation;
	BOOL _destinationIdentifierIsSectionIdentifier;
	BOOL _isDeleteAll;
	NSOrderedSet* _identifiers;
	long long _action;
	long long _relativePosition;
	id _destinationIdentifier;

}

@property (nonatomic,readonly) BOOL isSectionOperation;                                    //@synthesize isSectionOperation=_isSectionOperation - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * identifiers;                                 //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) long long action;                                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL isDeleteAll;                                           //@synthesize isDeleteAll=_isDeleteAll - In the implementation block
@property (nonatomic,readonly) long long relativePosition;                                 //@synthesize relativePosition=_relativePosition - In the implementation block
@property (nonatomic,readonly) id destinationIdentifier;                                   //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL destinationIdentifierIsSectionIdentifier;              //@synthesize destinationIdentifierIsSectionIdentifier=_destinationIdentifierIsSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateDeleteAll;
-(NSOrderedSet *)identifiers;
-(id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 ;
-(long long)relativePosition;
-(BOOL)destinationIdentifierIsSectionIdentifier;
-(long long)action;
-(id)initWithItemIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2 ;
-(NSString *)description;
-(id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4 ;
-(id)initWithItemIdentifiers:(id)arg1 action:(long long)arg2 ;
-(BOOL)isSectionOperation;
-(id)destinationIdentifier;
-(id)initWithSectionIdentifiers:(id)arg1 appendingToDestinationSectionIdentifier:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg1 sectionIdentifiers:(id)arg2 action:(long long)arg3 desinationIdentifier:(id)arg4 relativePosition:(long long)arg5 destinationIsSection:(BOOL)arg6 ;
-(void)_throwIfInvalid;
-(BOOL)isDeleteAll;
-(id)initWithSectionIdentifiers:(id)arg1 action:(long long)arg2 destinationIdentifier:(id)arg3 relativePosition:(long long)arg4 ;
@end

