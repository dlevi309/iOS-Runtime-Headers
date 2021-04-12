/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <TSReading/TSDContainerInfo.h>
#import <libobjc.A.dylib/SXTangierRepDirectLayerHostingInfo.h>

@protocol TSDRepDirectLayerHosting;
@class SXTextTangierStorage, NSSet, NSString;

@interface SXTextTangierContainerInfo : TSDContainerInfo <SXTangierRepDirectLayerHostingInfo> {

	BOOL _isSelectable;
	BOOL _shouldHyphenate;
	SXTextTangierStorage* _storage;
	NSSet* _fixedExclusionPaths;
	id<TSDRepDirectLayerHosting> _directLayerHost;

}

@property (nonatomic,readonly) SXTextTangierStorage * storage;                                 //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSSet * fixedExclusionPaths;                                      //@synthesize fixedExclusionPaths=_fixedExclusionPaths - In the implementation block
@property (nonatomic,retain) NSSet * rangedExclusionPaths; 
@property (assign,nonatomic) BOOL isSelectable;                                                //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldHyphenate;                                             //@synthesize shouldHyphenate=_shouldHyphenate - In the implementation block
@property (assign,nonatomic,__weak) id<TSDRepDirectLayerHosting> directLayerHost;              //@synthesize directLayerHost=_directLayerHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXTextTangierStorage *)storage;
-(BOOL)isSelectable;
-(void)setIsSelectable:(BOOL)arg1 ;
-(Class)layoutClass;
-(NSSet *)fixedExclusionPaths;
-(Class)repClass;
-(id<TSDRepDirectLayerHosting>)directLayerHost;
-(void)setDirectLayerHost:(id<TSDRepDirectLayerHosting>)arg1 ;
-(void)setShouldHyphenate:(BOOL)arg1 ;
-(NSSet *)rangedExclusionPaths;
-(void)setRangedExclusionPaths:(NSSet *)arg1 ;
-(BOOL)shouldHyphenate;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5 ;
-(void)setFixedExclusionPaths:(NSSet *)arg1 ;
@end

