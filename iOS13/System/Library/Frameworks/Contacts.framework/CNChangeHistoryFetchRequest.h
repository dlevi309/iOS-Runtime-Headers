/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSString, CNChangeHistoryAnchor;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding> {

	BOOL _shouldUnifyResults;
	BOOL _mutableObjects;
	BOOL _includeGroupChanges;
	BOOL _enforceClientIdentifier;
	BOOL _includeChangeAnchors;
	BOOL _includeChangeIDs;
	BOOL _includeExternalIDs;
	BOOL _includeImagesChanged;
	BOOL _includeLabeledValueChanges;
	NSData* _startingToken;
	NSArray* _additionalContactKeyDescriptors;
	NSArray* _excludedTransactionAuthors;
	NSString* _clientIdentifier;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) CNChangeHistoryAnchor * startingAnchor; 
@property (getter=shouldEnforceClientIdentifer,nonatomic,readonly) BOOL enforceClientIdentifier;              //@synthesize enforceClientIdentifier=_enforceClientIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                                                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeChangeAnchors;                                                       //@synthesize includeChangeAnchors=_includeChangeAnchors - In the implementation block
@property (assign,nonatomic) BOOL includeChangeIDs;                                                           //@synthesize includeChangeIDs=_includeChangeIDs - In the implementation block
@property (assign,nonatomic) BOOL includeExternalIDs;                                                         //@synthesize includeExternalIDs=_includeExternalIDs - In the implementation block
@property (assign,nonatomic) BOOL includeImagesChanged;                                                       //@synthesize includeImagesChanged=_includeImagesChanged - In the implementation block
@property (assign,nonatomic) BOOL includeLabeledValueChanges;                                                 //@synthesize includeLabeledValueChanges=_includeLabeledValueChanges - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                                                  //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL unifyResults; 
@property (nonatomic,copy) NSData * startingToken;                                                            //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,copy) NSArray * additionalContactKeyDescriptors;                                         //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (assign,nonatomic) BOOL shouldUnifyResults;                                                         //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                                                             //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL includeGroupChanges;                                                        //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
@property (nonatomic,copy) NSArray * excludedTransactionAuthors;                                              //@synthesize excludedTransactionAuthors=_excludedTransactionAuthors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setUnifyResults:(BOOL)arg1 ;
-(void)setStartingToken:(NSData *)arg1 ;
-(void)setShouldUnifyResults:(BOOL)arg1 ;
-(void)setAdditionalContactKeyDescriptors:(NSArray *)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(BOOL)unifyResults;
-(BOOL)mutableObjects;
-(void)setMutableObjects:(BOOL)arg1 ;
-(BOOL)shouldUnifyResults;
-(BOOL)includeGroupChanges;
-(BOOL)includeChangeIDs;
-(BOOL)includeExternalIDs;
-(BOOL)includeImagesChanged;
-(BOOL)includeLabeledValueChanges;
-(CNChangeHistoryAnchor *)startingAnchor;
-(BOOL)shouldEnforceClientIdentifer;
-(BOOL)includeChangeAnchors;
-(NSData *)startingToken;
-(id)initWithStartingAnchor:(id)arg1 ;
-(void)setStartingAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(NSArray *)additionalContactKeyDescriptors;
-(void)setIncludeGroupChanges:(BOOL)arg1 ;
-(NSArray *)excludedTransactionAuthors;
-(void)setExcludedTransactionAuthors:(NSArray *)arg1 ;
-(void)setIncludeChangeAnchors:(BOOL)arg1 ;
-(void)setIncludeChangeIDs:(BOOL)arg1 ;
-(void)setIncludeExternalIDs:(BOOL)arg1 ;
-(void)setIncludeImagesChanged:(BOOL)arg1 ;
-(void)setIncludeLabeledValueChanges:(BOOL)arg1 ;
@end

