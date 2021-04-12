/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface NSFileProviderDomain : NSObject <NSSecureCoding> {

	BOOL _disconnected;
	BOOL _hidden;
	BOOL _containsPhotos;
	BOOL _isContentManaged;
	BOOL _isEnterpriseDomain;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _pathRelativeToDocumentStorage;
	NSString* _symLinkName;
	NSError* _error;
	NSString* _personaIdentifier;

}

@property (assign,getter=isHidden,nonatomic) BOOL hidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * symLinkName;                               //@synthesize symLinkName=_symLinkName - In the implementation block
@property (assign,nonatomic) BOOL containsPhotos;                                //@synthesize containsPhotos=_containsPhotos - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                              //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * personaIdentifier;                       //@synthesize personaIdentifier=_personaIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isEnterpriseDomain;                            //@synthesize isEnterpriseDomain=_isEnterpriseDomain - In the implementation block
@property (copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (copy,readonly) NSString * pathRelativeToDocumentStorage;              //@synthesize pathRelativeToDocumentStorage=_pathRelativeToDocumentStorage - In the implementation block
@property (getter=isDisconnected) BOOL disconnected;                             //@synthesize disconnected=_disconnected - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)domainFromPlistDictionary:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)displayName;
-(BOOL)isHidden;
-(BOOL)isContentManaged;
-(NSString *)personaIdentifier;
-(void)setHidden:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(id)sharedAccountStore;
-(id)plistDictionary;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 ;
-(BOOL)containsPhotos;
-(BOOL)isEnterpriseDomain;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 hidden:(BOOL)arg4 ;
-(void)setSymLinkName:(NSString *)arg1 ;
-(void)setContainsPhotos:(BOOL)arg1 ;
-(void)setDisconnected:(BOOL)arg1 ;
-(NSString *)pathRelativeToDocumentStorage;
-(BOOL)isDisconnected;
-(NSString *)symLinkName;
-(void)setIsEnterpriseDomain:(BOOL)arg1 ;
@end

