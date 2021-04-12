/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString, CUIRenditionKey, CUIThemeRendition;

@interface CUINamedLookup : NSObject <NSLocking> {

	NSString* _name;
	CUIRenditionKey* _key;
	NSString* _signature;
	unsigned long long _storageRef;
	unsigned _distilledInVersion;
	os_unfair_lock_s _lock;
	unsigned _odContent : 1;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) CUIRenditionKey * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long storageRef;                 //@synthesize storageRef=_storageRef - In the implementation block
@property (nonatomic,readonly) CUIThemeRendition * _rendition; 
@property (nonatomic,readonly) CUIRenditionKey * renditionKey; 
@property (nonatomic,readonly) NSString * renditionName; 
@property (nonatomic,readonly) NSString * keySignature; 
@property (nonatomic,readonly) BOOL _cacheRenditionProperties; 
@property (nonatomic,readonly) unsigned _distilledInVersion; 
@property (nonatomic,readonly) unsigned long long subtype; 
@property (nonatomic,readonly) long long sizeClassHorizontal; 
@property (nonatomic,readonly) long long sizeClassVertical; 
@property (nonatomic,readonly) long long memoryClass; 
@property (nonatomic,readonly) long long graphicsClass; 
@property (nonatomic,readonly) long long appearanceIdentifier; 
@property (nonatomic,readonly) BOOL representsOnDemandContent; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) NSString * appearance; 
-(id)configuration;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(CUIRenditionKey *)key;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(void)setKey:(CUIRenditionKey *)arg1 ;
-(unsigned long long)subtype;
-(NSString *)appearance;
-(long long)idiom;
-(long long)layoutDirection;
-(long long)displayGamut;
-(BOOL)representsOnDemandContent;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CUIThemeRendition *)_rendition;
-(long long)appearanceIdentifier;
-(CUIRenditionKey *)renditionKey;
-(NSString *)keySignature;
-(unsigned)_distilledInVersion;
-(BOOL)isTintable;
-(void)setStorageRef:(unsigned long long)arg1 ;
-(unsigned long long)storageRef;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(BOOL)_cacheRenditionProperties;
-(NSString *)renditionName;
-(void)setRepresentsOnDemandContent:(BOOL)arg1 ;
-(long long)memoryClass;
-(long long)graphicsClass;
@end

