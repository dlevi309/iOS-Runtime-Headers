/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)classesForSecureCoding;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)requiredLibraryAddStatusObservationProperties;
+(void)performWithoutEnforcement:(/*^block*/id)arg1 ;
+(void)_indexProperties;
+(BOOL)_lookupPropertyForSelector:(SEL)arg1 result:(/*^block*/id)arg2 ;
+(id)_modelKeyForPropertySelector:(SEL)arg1 ;
+(id)requiredLibraryRemovalProperties;
+(BOOL)supportsLibraryRemoval;
+(id)requiredKeepLocalStatusObservationProperties;
+(BOOL)supportsKeepLocalStatusObservation;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(MPIdentifierSet *)identifiers;
-(id)_stateDumpObject;
-(NSString *)humanDescription;
-(id)contentItemCollectionInfo;
-(id)mediaItemPropertyValues;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(void)setValue:(id)arg1 forModelKey:(id)arg2 ;
-(id)valueForModelKey:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)copyWithIdentifiers:(id)arg1 block:(/*^block*/id)arg2 ;
-(MPIdentifierSet *)originalIdentifierSet;
-(BOOL)hasLoadedValueForKey:(id)arg1 ;
-(BOOL)hasLoadedValuesForPropertySet:(id)arg1 ;
-(BOOL)_isModelKey:(id)arg1 ;
-(long long)libraryRemovalSupportedOptions;
-(id)newKeepLocalStatusObserverConfiguration;
@end

