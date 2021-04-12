/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class NSURL, NSDictionary, SCNAssetCatalog, NSString, NSArray;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver {

	NSURL* _documentURL;
	NSDictionary* _context;
	SCNAssetCatalog* _assetCatalog;
	NSString* _lookUpKey;
	id _lookUpFoundInstance;
	NSArray* _currentMorphTargets;

}

@property (nonatomic,retain) NSArray * currentMorphTargets;               //@synthesize currentMorphTargets=_currentMorphTargets - In the implementation block
@property (nonatomic,retain) NSURL * documentURL;                         //@synthesize documentURL=_documentURL - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SCNAssetCatalog * assetCatalog;              //@synthesize assetCatalog=_assetCatalog - In the implementation block
@property (nonatomic,retain) NSString * lookUpKey;                        //@synthesize lookUpKey=_lookUpKey - In the implementation block
@property (nonatomic,retain) id lookUpFoundInstance;                      //@synthesize lookUpFoundInstance=_lookUpFoundInstance - In the implementation block
@property (nonatomic,readonly) NSURL * documentEnclosingURL; 
-(NSDictionary *)context;
-(NSURL *)documentURL;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)dealloc;
-(void)setContext:(NSDictionary *)arg1 ;
-(SCNAssetCatalog *)assetCatalog;
-(NSURL *)documentEnclosingURL;
-(void)setCurrentMorphTargets:(NSArray *)arg1 ;
-(id)initForReadingWithData:(id)arg1 secure:(BOOL)arg2 ;
-(void)setAssetCatalog:(SCNAssetCatalog *)arg1 ;
-(void)setLookUpKey:(NSString *)arg1 ;
-(id)lookUpFoundInstance;
-(NSString *)lookUpKey;
-(void)setLookUpFoundInstance:(id)arg1 ;
-(NSArray *)currentMorphTargets;
@end

