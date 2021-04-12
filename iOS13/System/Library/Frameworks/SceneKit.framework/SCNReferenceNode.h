/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNNode.h>

@class NSURL, NSMutableDictionary;

@interface SCNReferenceNode : SCNNode {

	NSURL* _referenceURL;
	BOOL _loaded;
	NSMutableDictionary* _overrides;
	long long _loadingPolicy;
	NSURL* _catalogURL;
	NSURL* _sourceDocumentURL;

}

@property (nonatomic,copy) NSURL * referenceURL; 
@property (assign,nonatomic) long long loadingPolicy;              //@synthesize loadingPolicy=_loadingPolicy - In the implementation block
@property (getter=isLoaded,readonly) BOOL loaded; 
+(BOOL)supportsSecureCoding;
+(id)referenceNodeWithURL:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)unload;
-(BOOL)isLoaded;
-(NSURL *)referenceURL;
-(id)_catalog;
-(void)setOverrides:(id)arg1 ;
-(id)overrides;
-(id)_resolveURL;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(BOOL)_isNameUnique:(id)arg1 ;
-(void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3 ;
-(void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3 ;
-(void)removeAllOverrides;
-(id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2 ;
-(void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2 ;
-(void)_applyOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setLoadingPolicy:(long long)arg1 ;
-(void)_loadWithCatalog:(id)arg1 ;
-(void)_loadWithURL:(id)arg1 catalog:(id)arg2 ;
-(void)_applyOverrides;
-(void)collectOverrides;
-(void)addOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(void)removeForKeyPath:(id)arg1 ;
-(void)setOverride:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)_isAReference;
-(void)_loadWithURL:(id)arg1 ;
-(long long)loadingPolicy;
@end

