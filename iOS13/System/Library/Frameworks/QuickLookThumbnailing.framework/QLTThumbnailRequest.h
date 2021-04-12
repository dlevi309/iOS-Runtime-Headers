/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLCacheVersionedFileIdentifier, NSUUID, NSString;

@interface QLTThumbnailRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldProvideFoldedGenericIcon;
	BOOL _iconMode;
	BOOL _wantsBaseline;
	int _flavor;
	QLCacheVersionedFileIdentifier* _fileIdentifier;
	NSUUID* _uuid;
	double _scale;
	NSString* _contentType;
	unsigned long long _badgeType;
	double _minimumDimension;
	long long _generationBehavior;
	unsigned long long _requestedTypes;
	CGSize _size;

}

@property (retain) NSUUID * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (readonly) float maximumPixelSize; 
@property (readonly) QLCacheVersionedFileIdentifier * fileIdentifier;                  //@synthesize fileIdentifier=_fileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                     //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) BOOL shouldProvideFoldedGenericIcon;                      //@synthesize shouldProvideFoldedGenericIcon=_shouldProvideFoldedGenericIcon - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                             //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,readonly) BOOL provideGenericIcon; 
@property (nonatomic,readonly) BOOL provideLowQualityThumbnail; 
@property (nonatomic,readonly) BOOL provideFullResolutionThumbnail; 
@property (nonatomic,readonly) long long requestedMostRepresentativeType; 
@property (readonly) BOOL iconMode;                                                    //@synthesize iconMode=_iconMode - In the implementation block
@property (assign) int flavor;                                                         //@synthesize flavor=_flavor - In the implementation block
@property (assign,nonatomic) double minimumDimension;                                  //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (assign) BOOL wantsBaseline;                                                 //@synthesize wantsBaseline=_wantsBaseline - In the implementation block
@property (assign) long long generationBehavior;                                       //@synthesize generationBehavior=_generationBehavior - In the implementation block
@property (nonatomic,readonly) BOOL provideCachedResultsOnly; 
@property (nonatomic,readonly) BOOL forceGeneration; 
@property (assign,nonatomic) unsigned long long requestedTypes;                        //@synthesize requestedTypes=_requestedTypes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 error:(id*)arg5 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 ;
+(id)thumbnailRequestForFileAtURL:(id)arg1 size:(CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(NSUUID *)uuid;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)minimumDimension;
-(int)flavor;
-(QLCacheVersionedFileIdentifier *)fileIdentifier;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)badgeType;
-(unsigned long long)requestedTypes;
-(void)setFlavor:(int)arg1 ;
-(void)setRequestedTypes:(unsigned long long)arg1 ;
-(void)setMinimumDimension:(double)arg1 ;
-(void)setWantsBaseline:(BOOL)arg1 ;
-(BOOL)wantsBaseline;
-(void)setGenerationBehavior:(long long)arg1 ;
-(long long)generationBehavior;
-(long long)requestedMostRepresentativeType;
-(BOOL)iconMode;
-(float)maximumPixelSize;
-(BOOL)provideGenericIcon;
-(BOOL)provideLowQualityThumbnail;
-(BOOL)provideFullResolutionThumbnail;
-(BOOL)provideCachedResultsOnly;
-(BOOL)forceGeneration;
-(id)initWithVersionedFileIdentifier:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 iconMode:(BOOL)arg4 flavor:(int)arg5 wantsBaseline:(BOOL)arg6 minimumDimension:(double)arg7 requestedTypes:(unsigned long long)arg8 ;
-(id)computeContentType;
-(BOOL)shouldProvideFoldedGenericIcon;
-(void)setShouldProvideFoldedGenericIcon:(BOOL)arg1 ;
@end

