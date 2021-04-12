/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSString;

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

@property (nonatomic,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeChangeAnchors;                            //@synthesize includeChangeAnchors=_includeChangeAnchors - In the implementation block
@property (assign,nonatomic) BOOL includeChangeIDs;                                //@synthesize includeChangeIDs=_includeChangeIDs - In the implementation block
@property (assign,nonatomic) BOOL includeExternalIDs;                              //@synthesize includeExternalIDs=_includeExternalIDs - In the implementation block
@property (assign,nonatomic) BOOL includeImagesChanged;                            //@synthesize includeImagesChanged=_includeImagesChanged - In the implementation block
@property (assign,nonatomic) BOOL includeLabeledValueChanges;                      //@synthesize includeLabeledValueChanges=_includeLabeledValueChanges - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL unifyResults; 
@property (nonatomic,copy) NSData * startingToken;                                 //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,copy) NSArray * additionalContactKeyDescriptors;              //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (assign,nonatomic) BOOL shouldUnifyResults;                              //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                                  //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL includeGroupChanges;                             //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
@property (nonatomic,copy) NSArray * excludedTransactionAuthors;                   //@synthesize excludedTransactionAuthors=_excludedTransactionAuthors - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)includeExternalIDs;
-(BOOL)includeImagesChanged;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)setMutableObjects:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIncludeChangeAnchors:(BOOL)arg1 ;
-(BOOL)includeChangeIDs;
-(NSString *)containerIdentifier;
-(BOOL)includeLabeledValueChanges;
-(void)setIncludeLabeledValueChanges:(BOOL)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setAdditionalContactKeyDescriptors:(NSArray *)arg1 ;
-(id)description;
-(void)setUnifyResults:(BOOL)arg1 ;
-(void)setIncludeExternalIDs:(BOOL)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(BOOL)shouldUnifyResults;
-(void)setShouldUnifyResults:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncludeImagesChanged:(BOOL)arg1 ;
-(BOOL)mutableObjects;
-(void)setStartingToken:(NSData *)arg1 ;
-(void)setIncludeGroupChanges:(BOOL)arg1 ;
-(BOOL)includeGroupChanges;
-(BOOL)includeChangeAnchors;
-(NSString *)clientIdentifier;
-(NSArray *)additionalContactKeyDescriptors;
-(BOOL)unifyResults;
-(void)setExcludedTransactionAuthors:(NSArray *)arg1 ;
-(NSData *)startingToken;
-(void)setIncludeChangeIDs:(BOOL)arg1 ;
-(NSArray *)excludedTransactionAuthors;
-(void)setStartingAnchor:(id)arg1 ;
@end

