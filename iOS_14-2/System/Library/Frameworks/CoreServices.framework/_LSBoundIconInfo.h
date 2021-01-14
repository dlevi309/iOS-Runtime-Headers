/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSIconResourceLocator.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, _LSLazyPropertyList, NSArray;

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

}

@property (nonatomic,copy) NSString * applicationIdentifier;                     //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * containerURL;                               //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,retain) NSURL * dataContainerURL;                           //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,retain) NSURL * resourcesDirectoryURL;                      //@synthesize resourcesDirectoryURL=_resourcesDirectoryURL - In the implementation block
@property (nonatomic,copy) _LSLazyPropertyList * iconsDictionary;                //@synthesize iconsDictionary=_iconsDictionary - In the implementation block
@property (nonatomic,copy) NSString * cacheKey;                                  //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,copy) NSArray * fileNames;                                  //@synthesize fileNames=_fileNames - In the implementation block
@property (assign,getter=isPrerendered,nonatomic) BOOL prerendered;              //@synthesize prerendered=_prerendered - In the implementation block
@property (assign,getter=isBadge,nonatomic) BOOL badge;                          //@synthesize badge=_badge - In the implementation block
@property (assign,nonatomic) BOOL documentAllowOverride;                         //@synthesize documentAllowOverride=_documentAllowOverride - In the implementation block
@property (readonly) NSDictionary * bundleIconsDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)cacheKey;
-(void)setIconsDictionary:(_LSLazyPropertyList *)arg1 ;
-(BOOL)isPrerendered;
-(NSURL *)dataContainerURL;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSDictionary *)bundleIconsDictionary;
-(void)setBadge:(BOOL)arg1 ;
-(BOOL)hasValidIconDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(_LSLazyPropertyList *)iconsDictionary;
-(void)setContainerURL:(NSURL *)arg1 ;
-(void)setDocumentAllowOverride:(BOOL)arg1 ;
-(NSString *)applicationIdentifier;
-(BOOL)hasValidFileNames;
-(BOOL)isBadge;
-(BOOL)documentAllowOverride;
-(void)setFileNames:(NSArray *)arg1 ;
-(NSURL *)containerURL;
-(void)setPrerendered:(BOOL)arg1 ;
-(NSArray *)fileNames;
-(id)initWithCoder:(id)arg1 ;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSURL *)resourcesDirectoryURL;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(void)setResourcesDirectoryURL:(NSURL *)arg1 ;
@end

