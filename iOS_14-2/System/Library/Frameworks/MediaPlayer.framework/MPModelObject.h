/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPIdentifierSet, NSMutableDictionary, NSString;

@interface MPModelObject : NSObject <_MPStateDumpPropertyListTransformable, NSCopying, NSSecureCoding> {

	MPIdentifierSet* _originalIdentifierSet;
	NSMutableDictionary* _storage;
	BOOL _isFinalized;
	MPIdentifierSet* _identifiers;

}

@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration; 
@property (nonatomic,readonly) long long libraryRemovalSupportedOptions; 
@property (nonatomic,readonly) MPIdentifierSet * originalIdentifierSet; 
@property (nonatomic,readonly) NSString * humanDescription; 
@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                                                         //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)classesForSecureCoding;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(void)_indexProperties;
+(void)performWithoutEnforcement:(/*^block*/id)arg1 ;
+(BOOL)_lookupPropertyForSelector:(SEL)arg1 result:(/*^block*/id)arg2 ;
+(id)_modelKeyForPropertySelector:(SEL)arg1 ;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg1 ;
-(MPIdentifierSet *)identifiers;
-(id)contentItemCollectionInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)mediaItemPropertyValues;
-(id)_stateDumpObject;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(void)setValue:(id)arg1 forModelKey:(id)arg2 ;
-(id)valueForModelKey:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithPropertySet:(id)arg1 ;
-(MPIdentifierSet *)originalIdentifierSet;
-(id)copyWithIdentifiers:(id)arg1 propertySet:(id)arg2 ;
-(BOOL)hasLoadedValueForKey:(id)arg1 ;
-(BOOL)hasLoadedValuesForPropertySet:(id)arg1 ;
-(BOOL)_isModelKey:(id)arg1 ;
-(id)mergeWithObject:(id)arg1 ;
-(id)_sanitizedStorage;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
-(NSString *)humanDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

