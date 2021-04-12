/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NTKInstalledSystemApplicationsChangeObserver.h>
#import <libobjc.A.dylib/NTKEditModeMapping.h>

@class NTKFaceConfiguration, NSHashTable, NSDictionary, NSMutableDictionary, NSString, CLKDevice, NSArray, NSDate, NSNumber;

@interface NTKFace : NSObject <NSSecureCoding, NSCopying, NTKInstalledSystemApplicationsChangeObserver, NTKEditModeMapping> {

	NTKFaceConfiguration* _configuration;
	NSHashTable* _fvcObservers;
	NSHashTable* _observers;
	NSDictionary* _complicationSlotDescriptors;
	NSMutableDictionary* _selectedSlotsByEditMode;
	BOOL _suppressingConfigurationChangeNotifications;
	BOOL _configurationChangedWhileSuppressingNotifications;
	BOOL _resourceDirectoryIsOwned;
	NSString* _cachedDefaultName;
	BOOL _editOptionsPrepared;
	BOOL _isLibraryFace;
	BOOL _complicationExistenceInvalidatesSnapshot;
	BOOL _beingEdited;
	long long _faceStyle;
	CLKDevice* _device;
	NSString* _resourceDirectory;
	long long _mostRecentEditMode;

}

@property (assign,nonatomic) long long mostRecentEditMode;                                 //@synthesize mostRecentEditMode=_mostRecentEditMode - In the implementation block
@property (assign,nonatomic) BOOL beingEdited;                                             //@synthesize beingEdited=_beingEdited - In the implementation block
@property (nonatomic,readonly) NSArray * editModes; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isSingular,nonatomic,readonly) BOOL singular; 
@property (nonatomic,readonly) long long editModeForCustomEditViewController; 
@property (nonatomic,readonly) long long faceStyle;                                        //@synthesize faceStyle=_faceStyle - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NTKFaceConfiguration * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * resourceDirectory;                               //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (nonatomic,readonly) BOOL editOptionsPrepared;                                   //@synthesize editOptionsPrepared=_editOptionsPrepared - In the implementation block
@property (assign,nonatomic) long long origin; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * lastEditedDate; 
@property (assign,nonatomic) long long editedState; 
@property (nonatomic,readonly) NSNumber * numberOfGizmoEdits; 
@property (nonatomic,readonly) BOOL hasGizmoEdits; 
@property (nonatomic,readonly) NSNumber * numberOfCompanionEdits; 
@property (nonatomic,readonly) BOOL hasCompanionEdits; 
@property (assign,nonatomic) BOOL isLibraryFace;                                           //@synthesize isLibraryFace=_isLibraryFace - In the implementation block
@property (nonatomic,readonly) NSString * dailySnapshotKey; 
@property (nonatomic,readonly) BOOL wantsUnadornedSnapshot; 
@property (nonatomic,readonly) NSString * unadornedSnapshotKey; 
@property (nonatomic,readonly) BOOL complicationExistenceInvalidatesSnapshot;              //@synthesize complicationExistenceInvalidatesSnapshot=_complicationExistenceInvalidatesSnapshot - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)_faceClassForStyle:(long long)arg1 ;
+(BOOL)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2 ;
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(id)_richComplicationSlotsForDevice:(id)arg1 ;
+(BOOL)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3 ;
+(void)enumerateComplicationSlotsWithBlock:(/*^block*/id)arg1 ;
+(id)localizedNameForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(id)richComplicationSlotsForDevice:(id)arg1 ;
+(id)fixedComplicationSlotsForDevice:(id)arg1 ;
+(id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)_customEditModeIsShowSeconds:(long long)arg1 forDevice:(id)arg2 ;
+(id)monogramSlotForDevice:(id)arg1 ;
+(BOOL)customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3 ;
+(id)_dateComplicationSlotForDevice:(id)arg1 ;
+(unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)arg1 ;
+(id)faceWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 forMigration:(BOOL)arg3 ;
+(id)_linkedResourceRootDirectory;
+(BOOL)_customEditModeIsColor:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)customEditModeIsColor:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)customEditModeIsRows:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)customEditModeIsShowSeconds:(long long)arg1 forDevice:(id)arg2 ;
+(void)enumerateComplicationSlots:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)_monogramComplicationSlotForDevice:(id)arg1 ;
+(id)possibleComplicationTypesForSlot:(id)arg1 ;
+(id)defaultFaceOfStyle:(long long)arg1 forDevice:(id)arg2 initCustomization:(/*^block*/id)arg3 ;
+(id)_sampleFaceDifferentFromFaces:(id)arg1 forDevice:(id)arg2 ;
+(unsigned long long)maximumRemoteComplicationsOnAnyFaceForDevice:(id)arg1 ;
+(id)_slotsForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_complication:(id)arg1 isValidForSlot:(id)arg2 forDevice:(id)arg3 ;
+(id)_defaultSelectedSlotForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_isInternalOnlyForDevice:(id)arg1 ;
+(id)availableInternalFaceStylesForDevice:(id)arg1 ;
+(BOOL)isRestrictedForDevice:(id)arg1 ;
+(id)defaultFaceOfStyle:(long long)arg1 forDevice:(id)arg2 ;
+(id)sampleFaceOfStyle:(long long)arg1 forDevice:(id)arg2 differentFromFaces:(id)arg3 ;
+(unsigned long long)maximumRemoteComplicationsOnAnyFace;
+(id)dateSlotForDevice:(id)arg1 ;
+(id)faceWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)isFaceStyleAvailableInternal:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)isFaceStyleRestricted:(long long)arg1 forDevice:(id)arg2 ;
+(id)PPTBlankFace;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSDate *)creationDate;
-(CLKDevice *)device;
-(long long)origin;
-(NTKFaceConfiguration *)configuration;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)_commonInit;
-(void)setOrigin:(long long)arg1 ;
-(BOOL)isEditable;
-(void)prepareForDeletion;
-(void)setDevice:(CLKDevice *)arg1 ;
-(id)faceDescription;
-(BOOL)_allowsEditing;
-(BOOL)applyConfiguration:(id)arg1 ;
-(id)_defaultName;
-(id)JSONObjectRepresentation;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(NSString *)resourceDirectory;
-(id)_complicationSlotDescriptors;
-(id)_orderedComplicationSlots;
-(id)_localizedNameForComplicationSlot:(id)arg1 ;
-(id)_resourceDirectorySnapshotKey;
-(BOOL)_hasOptionsForCustomEditMode:(long long)arg1 ;
-(id)selectedOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)setResourceDirectoryByTransferringOwnership:(id)arg1 ;
-(long long)editModeForCustomEditViewController;
-(BOOL)_option:(id)arg1 migratesToValidOption:(id*)arg2 forCustomEditMode:(long long)arg3 ;
-(void)_updateForResourceDirectoryChange:(id)arg1 ;
-(NSString *)dailySnapshotKey;
-(long long)_customEditModeForUniqueConfiguration;
-(void)_prepareEditOptions;
-(void)_cleanupEditOptions;
-(long long)faceStyle;
-(BOOL)wantsUnadornedSnapshot;
-(NSString *)unadornedSnapshotKey;
-(id)complicationForSlot:(id)arg1 ;
-(void)enumerateComplicationSlotsWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)editModes;
-(void)setBeingEdited:(BOOL)arg1 ;
-(id)slotsForCustomEditMode:(long long)arg1 ;
-(void)enumerateSlotsForCustomEditMode:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)setResourceDirectory:(NSString *)arg1 ;
-(void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)allowedComplicationsForSlot:(id)arg1 ;
-(void)setComplication:(id)arg1 forSlot:(id)arg2 ;
-(unsigned long long)indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)setSelectedSlot:(id)arg1 forEditMode:(long long)arg2 ;
-(id)orderedComplicationSlots;
-(id)editOptionThatHidesAllComplications;
-(id)complicationSlotsHiddenByEditOption:(id)arg1 ;
-(id)allVisibleComplicationsForCurrentConfiguration;
-(long long)complicationFamilyForSlot:(id)arg1 ;
-(id)selectedSlotForEditMode:(long long)arg1 ;
-(void)prepareEditOptions;
-(BOOL)editOptionsPrepared;
-(id)displayNameForComplicationSlot:(id)arg1 ;
-(BOOL)complicationExistenceInvalidatesSnapshot;
-(BOOL)_snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2 ;
-(id)_faceDescriptionForLibrary;
-(id)editOptionsForCustomEditModes;
-(id)selectedOptionsForCustomEditModes;
-(void)setLastEditedDate:(NSDate *)arg1 ;
-(void)incrementNumberOfCompanionEdits;
-(void)setEditedState:(long long)arg1 ;
-(BOOL)isSingular;
-(long long)editedState;
-(NSDate *)lastEditedDate;
-(void)installedSystemApplicationsDidChange;
-(BOOL)_wantsUnadornedSnapshot;
-(BOOL)isFullscreenConfiguration;
-(void)_selectDefaultSlots;
-(void)_updateComplicationTombstones;
-(void)_registerComplicationsDidChangeNotification;
-(void)_deleteResourceDirectoryIfOwned;
-(void)_setResourceDirectory:(id)arg1 ;
-(void)_notifyObserversFaceResourceDirectoryDidChange;
-(void)_notifyObserversThatRespondToSelector:(SEL)arg1 callSelector:(/*^block*/id)arg2 ;
-(BOOL)_shouldHideUI;
-(id)_sortedComplicationSlots;
-(BOOL)_complication:(id)arg1 appearsInDailySnapshotForSlot:(id)arg2 ;
-(void)_notifyObserversFaceConfigurationDidChange;
-(void)_noteOptionChangedFrom:(id)arg1 to:(id)arg2 forCustomEditMode:(long long)arg3 slot:(id)arg4 ;
-(id)nameOfSelectedOptionForCustomEditMode:(long long)arg1 ;
-(void)cleanupEditOptions;
-(id)_allComplications;
-(void)enumerateCustomEditModesWithBlock:(/*^block*/id)arg1 ;
-(id)allowedComplicationTypesFromDescriptors:(id)arg1 slot:(id)arg2 ;
-(id)allowedComplicationsForSlot:(id)arg1 includingComplication:(id)arg2 ;
-(id)allowedComplicationTypesForSlot:(id)arg1 ;
-(id)_allowedComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(id)possibleComplicationTypesForSlot:(id)arg1 ;
-(id)_disabledComplicationTypesIndexSet;
-(BOOL)_hasCustomSwitcherSelectionAction;
-(void)_performCustomSwitcherSelectionAction;
-(id)_initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 ;
-(void)applyDefaultConfiguration;
-(BOOL)_applyConfiguration:(id)arg1 allowFailure:(BOOL)arg2 ;
-(void)applyDefaultComplicationConfiguration;
-(id)_defaultComplicationOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(void)_prepareForDeletion;
-(Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(BOOL)arg2 ;
-(id)_configurationFromOldEncodingWithCoder:(id)arg1 ;
-(id)_complicationMigrationPaths;
-(long long)_editModeForOldEncodingIndex:(long long)arg1 ;
-(void)_customizeWithJSONDescription:(id)arg1 ;
-(BOOL)_verifyCompatibilityOfConfiguration:(id)arg1 ;
-(id)_defaultOptionForMissingCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_option:(id)arg1 isValidForCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(Class)editOptionClassFromEditMode:(long long)arg1 resourceDirectoryExists:(BOOL)arg2 ;
-(void)setComplicationSlotDescriptors:(id)arg1 ;
-(void)_notifyObserversOptionsDidChangeForEditMode:(long long)arg1 ;
-(void)_notifyObserversFaceUpgradeOccurred;
-(id)customEditModes;
-(id)namesOfSelectedOptionsForCustomEditModes;
-(void)enumerateVisibleComplicationSlotsForCurrentConfigurationWithBlock:(/*^block*/id)arg1 ;
-(void)clearComplicationTombstones;
-(BOOL)hasComplicationsOfType:(unsigned long long)arg1 forSlot:(id)arg2 ;
-(BOOL)hasCustomSwitcherSelectionAction;
-(void)performCustomSwitcherSelectionAction;
-(void)applyUniqueConfigurationWithExistingFaces:(id)arg1 ;
-(BOOL)isEquivalentToFace:(id)arg1 ;
-(NSNumber *)numberOfGizmoEdits;
-(BOOL)hasGizmoEdits;
-(void)incrementNumberOfGizmoEdits;
-(NSNumber *)numberOfCompanionEdits;
-(BOOL)hasCompanionEdits;
-(void)didMoveToLibrary;
-(BOOL)hasValidConfigurationForDevice:(id)arg1 ;
-(BOOL)isLibraryFace;
-(void)setIsLibraryFace:(BOOL)arg1 ;
-(long long)mostRecentEditMode;
-(void)setMostRecentEditMode:(long long)arg1 ;
-(BOOL)beingEdited;
-(id)_faceDescription;
-(id)faceDescriptionForExternal;
-(id)faceDescriptionForLibrary;
-(id)_faceDescriptionKey;
-(id)_faceDescriptionKeyForLibrary;
-(id)_faceDescriptionForExternal;
-(id)_faceDescriptionKeyForExternal;
@end

