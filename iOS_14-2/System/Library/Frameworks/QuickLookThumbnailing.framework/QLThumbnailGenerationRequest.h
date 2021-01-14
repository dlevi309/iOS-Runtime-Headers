/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FPSandboxingURLWrapper, NSURL, FPItem, NSData, NSUUID, QLCacheBasicVersionedFileIdentifier, QLCacheFileProviderVersionedFileIdentifier, NSError, NSDictionary, NSDate, QLThumbnailRepresentation, UTType;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _iconMode;
	BOOL _wantsBaseline;
	BOOL _cancelled;
	BOOL _finished;
	BOOL _downloadingAllowed;
	int _interpolationQuality;
	NSString* _contentTypeUTI;
	double _minimumDimension;
	double _scale;
	unsigned long long _representationTypes;
	FPSandboxingURLWrapper* _quicklookSandboxWrapper;
	FPSandboxingURLWrapper* _genericSandboxWrapper;
	FPSandboxingURLWrapper* _parentDirectorySandboxWrapper;
	NSURL* _fileURL;
	FPItem* _item;
	NSData* _data;
	NSUUID* _uuid;
	QLCacheBasicVersionedFileIdentifier* _basicFileIdentifier;
	QLCacheFileProviderVersionedFileIdentifier* _fileProviderFileIdentifier;
	unsigned long long _badgeType;
	long long _iconVariant;
	long long _generationBehavior;
	NSError* _requestIsInvalidError;
	NSDictionary* _externalThumbnailGeneratorData;
	unsigned long long _externalThumbnailGeneratorDataHash;
	NSDate* _beginDate;
	QLThumbnailRepresentation* _mostRepresentativeThumbnail;
	/*^block*/id _updateBlock;
	/*^block*/id _completionBlock;
	/*^block*/id _statusBlock;
	FPSandboxingURLWrapper* _saveURLSandboxWrapper;
	NSString* _saveURLContentType;
	unsigned long long _typesForWhichUpdateBlockHasBeenCalled;
	NSString* _overriddenContentType;
	CGSize _size;

}

@property (nonatomic,retain) QLThumbnailRepresentation * mostRepresentativeThumbnail; 
@property (nonatomic,copy) id updateBlock; 
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,copy) id statusBlock; 
@property (nonatomic,readonly) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled; 
@property (nonatomic,retain) FPSandboxingURLWrapper * quicklookSandboxWrapper;                                     //@synthesize quicklookSandboxWrapper=_quicklookSandboxWrapper - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * genericSandboxWrapper;                                       //@synthesize genericSandboxWrapper=_genericSandboxWrapper - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * parentDirectorySandboxWrapper;                               //@synthesize parentDirectorySandboxWrapper=_parentDirectorySandboxWrapper - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) FPItem * item;                                                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                        //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * contentTypeUTI;                                                            //@synthesize contentTypeUTI=_contentTypeUTI - In the implementation block
@property (nonatomic,retain) QLCacheBasicVersionedFileIdentifier * basicFileIdentifier;                            //@synthesize basicFileIdentifier=_basicFileIdentifier - In the implementation block
@property (nonatomic,retain) QLCacheFileProviderVersionedFileIdentifier * fileProviderFileIdentifier;              //@synthesize fileProviderFileIdentifier=_fileProviderFileIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                                                         //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) long long iconVariant;                                                                //@synthesize iconVariant=_iconVariant - In the implementation block
@property (assign,nonatomic) BOOL wantsBaseline;                                                                   //@synthesize wantsBaseline=_wantsBaseline - In the implementation block
@property (assign,nonatomic) long long generationBehavior;                                                         //@synthesize generationBehavior=_generationBehavior - In the implementation block
@property (assign,nonatomic) int interpolationQuality;                                                             //@synthesize interpolationQuality=_interpolationQuality - In the implementation block
@property (nonatomic,retain) NSError * requestIsInvalidError;                                                      //@synthesize requestIsInvalidError=_requestIsInvalidError - In the implementation block
@property (assign,nonatomic) CGSize size;                                                                          //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                                                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long representationTypes;                                               //@synthesize representationTypes=_representationTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * externalThumbnailGeneratorData;                                        //@synthesize externalThumbnailGeneratorData=_externalThumbnailGeneratorData - In the implementation block
@property (assign,nonatomic) unsigned long long externalThumbnailGeneratorDataHash;                                //@synthesize externalThumbnailGeneratorDataHash=_externalThumbnailGeneratorDataHash - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                                    //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                                                      //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NSDate * beginDate;                                                                   //@synthesize beginDate=_beginDate - In the implementation block
@property (nonatomic,retain) QLThumbnailRepresentation * mostRepresentativeThumbnail;                              //@synthesize mostRepresentativeThumbnail=_mostRepresentativeThumbnail - In the implementation block
@property (nonatomic,copy) id updateBlock;                                                                         //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                                         //@synthesize statusBlock=_statusBlock - In the implementation block
@property (nonatomic,retain) FPSandboxingURLWrapper * saveURLSandboxWrapper;                                       //@synthesize saveURLSandboxWrapper=_saveURLSandboxWrapper - In the implementation block
@property (assign,getter=isDownloadingAllowed,nonatomic) BOOL downloadingAllowed;                                  //@synthesize downloadingAllowed=_downloadingAllowed - In the implementation block
@property (nonatomic,copy) NSString * saveURLContentType;                                                          //@synthesize saveURLContentType=_saveURLContentType - In the implementation block
@property (assign,nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled;                             //@synthesize typesForWhichUpdateBlockHasBeenCalled=_typesForWhichUpdateBlockHasBeenCalled - In the implementation block
@property (nonatomic,retain) NSString * overriddenContentType;                                                     //@synthesize overriddenContentType=_overriddenContentType - In the implementation block
@property (nonatomic,copy) UTType * contentType; 
@property (assign,nonatomic) double minimumDimension;                                                              //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (assign,nonatomic) BOOL iconMode;                                                                        //@synthesize iconMode=_iconMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)customExtensionCommunicationEncodedClasses;
+(id)requestWithThumbnailRequest:(id)arg1 ;
+(id)_fileProviderFileIdentifierForFPItem:(id)arg1 ;
+(id)_basicFileIdentifierForURL:(id)arg1 error:(id*)arg2 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)finish;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(CGSize)size;
-(id)initWithData:(id)arg1 contentType:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 representationTypes:(unsigned long long)arg5 ;
-(FPItem *)item;
-(UTType *)contentType;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id)initWithFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4 ;
-(id)_stateDescription;
-(BOOL)isFinished;
-(void)setData:(NSData *)arg1 ;
-(NSDate *)beginDate;
-(void)setItem:(FPItem *)arg1 ;
-(BOOL)isUbiquitous;
-(NSURL *)fileURL;
-(id)description;
-(unsigned long long)badgeType;
-(void)setBeginDate:(NSDate *)arg1 ;
-(BOOL)isValid;
-(void)setFinished:(BOOL)arg1 ;
-(id)saveURL;
-(NSData *)data;
-(void)setScale:(double)arg1 ;
-(id)fileIdentifier;
-(void)setIconMode:(BOOL)arg1 ;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setStatusBlock:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)statusBlock;
-(double)minimumDimension;
-(void)setContentType:(UTType *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)initWithFPItem:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4 ;
-(void)setIconVariant:(long long)arg1 ;
-(id)updateBlock;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setMinimumDimension:(double)arg1 ;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)iconMode;
-(void)setContentTypeUTI:(NSString *)arg1 ;
-(void)setExternalThumbnailGeneratorData:(NSDictionary *)arg1 ;
-(long long)iconVariant;
-(int)interpolationQuality;
-(unsigned long long)externalThumbnailGeneratorDataHash;
-(float)maximumPixelSize;
-(void)setInterpolationQuality:(int)arg1 ;
-(FPSandboxingURLWrapper *)quicklookSandboxWrapper;
-(NSString *)contentTypeUTI;
-(BOOL)isFileBased;
-(BOOL)isDataBased;
-(BOOL)provideLowQualityThumbnail;
-(BOOL)provideFullResolutionThumbnail;
-(BOOL)provideCachedResultsOnly;
-(unsigned long long)representationTypes;
-(BOOL)forceGeneration;
-(id)copyWithSize:(CGSize)arg1 ;
-(NSString *)overriddenContentType;
-(FPSandboxingURLWrapper *)genericSandboxWrapper;
-(FPSandboxingURLWrapper *)parentDirectorySandboxWrapper;
-(void)setOverriddenContentType:(NSString *)arg1 ;
-(BOOL)wantsBaseline;
-(NSDictionary *)externalThumbnailGeneratorData;
-(id)equivalentFPItemRequestWithItem:(id)arg1 representationTypes:(unsigned long long)arg2 ;
-(long long)requestedMostRepresentativeType;
-(BOOL)resultShouldBeSavedToDisk;
-(NSString *)saveURLContentType;
-(void)setWantsBaseline:(BOOL)arg1 ;
-(BOOL)isDownloadingAllowed;
-(void)setRepresentationTypes:(unsigned long long)arg1 ;
-(void)setGenerationBehavior:(long long)arg1 ;
-(long long)generationBehavior;
-(QLThumbnailRepresentation *)mostRepresentativeThumbnail;
-(void)setMostRepresentativeThumbnail:(QLThumbnailRepresentation *)arg1 ;
-(unsigned long long)typesForWhichUpdateBlockHasBeenCalled;
-(void)markDidBegin;
-(BOOL)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)arg1 ;
-(long long)mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
-(QLCacheBasicVersionedFileIdentifier *)basicFileIdentifier;
-(QLCacheFileProviderVersionedFileIdentifier *)fileProviderFileIdentifier;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 representationTypes:(unsigned long long)arg3 ;
-(FPSandboxingURLWrapper *)saveURLSandboxWrapper;
-(void)setSaveURLSandboxWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setSaveURLContentType:(NSString *)arg1 ;
-(void)setDownloadingAllowed:(BOOL)arg1 ;
-(void)setQuicklookSandboxWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setGenericSandboxWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setParentDirectorySandboxWrapper:(FPSandboxingURLWrapper *)arg1 ;
-(void)setBasicFileIdentifier:(QLCacheBasicVersionedFileIdentifier *)arg1 ;
-(void)setFileProviderFileIdentifier:(QLCacheFileProviderVersionedFileIdentifier *)arg1 ;
-(void)setSaveURL:(id)arg1 ;
-(BOOL)provideGenericIcon;
-(BOOL)prepareForSending;
-(void)noteUpdateBlockHasBeenCalledForType:(long long)arg1 ;
-(NSError *)requestIsInvalidError;
-(void)setRequestIsInvalidError:(NSError *)arg1 ;
-(void)setExternalThumbnailGeneratorDataHash:(unsigned long long)arg1 ;
-(void)setTypesForWhichUpdateBlockHasBeenCalled:(unsigned long long)arg1 ;
@end

