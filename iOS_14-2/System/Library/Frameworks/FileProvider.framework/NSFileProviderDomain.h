/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface NSFileProviderDomain : NSObject <NSSecureCoding> {

	BOOL _hidden;
	BOOL _containsPhotos;
	BOOL _isContentManaged;
	BOOL _isEnterpriseDomain;
	BOOL _disconnected;
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
@property (getter=isDisconnected) BOOL disconnected;                             //@synthesize disconnected=_disconnected - In the implementation block
@property (copy,readonly) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (copy,readonly) NSString * pathRelativeToDocumentStorage;              //@synthesize pathRelativeToDocumentStorage=_pathRelativeToDocumentStorage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)domainFromPlistDictionary:(id)arg1 identifier:(id)arg2 ;
-(id)plistDictionary;
-(BOOL)isContentManaged;
-(NSString *)personaIdentifier;
-(void)setPersonaIdentifier:(NSString *)arg1 ;
-(void)setSymLinkName:(NSString *)arg1 ;
-(BOOL)isHidden;
-(NSString *)pathRelativeToDocumentStorage;
-(BOOL)isDisconnected;
-(void)setHidden:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)sharedAccountStore;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setContainsPhotos:(BOOL)arg1 ;
-(id)description;
-(NSString *)symLinkName;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)setIsEnterpriseDomain:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnterpriseDomain;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 hidden:(BOOL)arg4 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 pathRelativeToDocumentStorage:(id)arg3 ;
-(NSString *)displayName;
-(BOOL)containsPhotos;
-(void)setDisconnected:(BOOL)arg1 ;
@end

