/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSIconResourceLocator.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSBundleProxy, NSString, NSURL, NSDictionary, _LSLazyPropertyList, NSArray;

@interface _LSBoundIconInfo : NSObject <LSIconResourceLocator, NSSecureCoding> {

	BOOL _prerendered;
	BOOL _badge;
	BOOL _documentAllowOverride;
	NSString* _applicationIdentifier;
	NSURL* _containerURL;
	NSURL* _dataContainerURL;
	NSURL* _resourcesDirectoryURL;
	_LSLazyPropertyList* _iconsDictionary;
	NSString* _cacheKey;
	NSArray* _fileNames;
	LSBundleProxy* _typeOwner;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                     //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * containerURL;                               //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,retain) NSURL * dataContainerURL;                           //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,retain) NSURL * resourcesDirectoryURL;                      //@synthesize resourcesDirectoryURL=_resourcesDirectoryURL - In the implementation block
@property (nonatomic,copy) _LSLazyPropertyList * iconsDictionary;                //@synthesize iconsDictionary=_iconsDictionary - In the implementation block
@property (nonatomic,copy) NSString * cacheKey;                                  //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) NSArray * fileNames;                                  //@synthesize fileNames=_fileNames - In the implementation block
@property (nonatomic,copy) LSBundleProxy * typeOwner;                            //@synthesize typeOwner=_typeOwner - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered;              //@synthesize prerendered=_prerendered - In the implementation block
@property (assign,getter=isBadge,nonatomic) BOOL badge;                          //@synthesize badge=_badge - In the implementation block
@property (assign,nonatomic) BOOL documentAllowOverride;                         //@synthesize documentAllowOverride=_documentAllowOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDictionary * bundleIconsDictionary; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(BOOL)isBadge;
-(NSArray *)fileNames;
-(_LSLazyPropertyList *)iconsDictionary;
-(BOOL)hasValidIconDictionary;
-(BOOL)hasValidFileNames;
-(LSBundleProxy *)typeOwner;
-(NSDictionary *)bundleIconsDictionary;
-(NSString *)cacheKey;
-(BOOL)isPrerendered;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setContainerURL:(NSURL *)arg1 ;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(void)setResourcesDirectoryURL:(NSURL *)arg1 ;
-(void)setIconsDictionary:(_LSLazyPropertyList *)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(void)setFileNames:(NSArray *)arg1 ;
-(void)setTypeOwner:(LSBundleProxy *)arg1 ;
-(void)setPrerendered:(BOOL)arg1 ;
-(NSURL *)dataContainerURL;
-(NSURL *)containerURL;
-(void)setDocumentAllowOverride:(BOOL)arg1 ;
-(BOOL)documentAllowOverride;
-(NSURL *)resourcesDirectoryURL;
-(void)setBadge:(BOOL)arg1 ;
@end

