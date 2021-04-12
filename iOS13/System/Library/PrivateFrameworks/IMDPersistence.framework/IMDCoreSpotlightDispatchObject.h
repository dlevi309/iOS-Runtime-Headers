/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class CRRecentContactsLibrary;

@interface IMDCoreSpotlightDispatchObject : NSObject {

	BOOL _allowsOverrideOfObjects;
	BOOL _shouldAddToSuggestions;
	BOOL _shouldAddToSpotlight;
	BOOL _shouldAddToCoreRecents;
	CRRecentContactsLibrary* _recentsInstance;

}

@property (assign,nonatomic) CRRecentContactsLibrary * recentsInstance;              //@synthesize recentsInstance=_recentsInstance - In the implementation block
@property (assign,nonatomic) BOOL allowsOverrideOfObjects;                           //@synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSuggestions;                            //@synthesize shouldAddToSuggestions=_shouldAddToSuggestions - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSpotlight;                              //@synthesize shouldAddToSpotlight=_shouldAddToSpotlight - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToCoreRecents;                            //@synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CRRecentContactsLibrary *)recentsInstance;
-(BOOL)allowsOverrideOfObjects;
-(void)setRecentsInstance:(CRRecentContactsLibrary *)arg1 ;
-(void)setAllowsOverrideOfObjects:(BOOL)arg1 ;
-(BOOL)shouldAddToSuggestions;
-(void)setShouldAddToSuggestions:(BOOL)arg1 ;
-(BOOL)shouldAddToSpotlight;
-(void)setShouldAddToSpotlight:(BOOL)arg1 ;
-(BOOL)shouldAddToCoreRecents;
-(void)setShouldAddToCoreRecents:(BOOL)arg1 ;
@end

