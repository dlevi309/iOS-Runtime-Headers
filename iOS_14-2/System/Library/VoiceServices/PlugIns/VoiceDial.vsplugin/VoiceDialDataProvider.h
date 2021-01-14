/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <VoiceDial/VoiceDial-Structs.h>
#import <libobjc.A.dylib/VSRecognitionModelDataProvider.h>

@class NSArray, NSSet, VoiceDialNameDataSource, NSString;

@interface VoiceDialDataProvider : NSObject <VSRecognitionModelDataProvider> {

	void* _addressBook;
	CFArrayRef _people;
	NSArray* _phoneLabels;
	NSArray* _facetimeLabels;
	NSSet* _weightedPhoneLabels;
	NSSet* _weightedFacetimeLabels;
	SCD_Struct_Vo2 _peopleRange;
	long long _totalPeople;
	VoiceDialNameDataSource* _namesSource;
	int _lastSequenceNumber;
	CFStringRef _lastDatabaseUUID;
	struct {
		unsigned hasDeterminedCompositePref : 1;
		unsigned compositeNamesOnly : 1;
		unsigned canVideoCall : 1;
	}  _voiceDialProviderFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void*)_addressBook;
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2 ;
-(BOOL)getValue:(id*)arg1 weight:(long long*)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5 ;
-(id)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3 ;
-(id)cacheValidityIdentifier;
-(BOOL)isCacheValidityIdentifierValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)_shouldUseCompositeNamesOnly;
-(void)getLabels:(id*)arg1 andWeightedLabels:(id*)arg2 ForABProperty:(int)arg3 ;
-(long long)_totalPeople;
-(id)_facetimeLabels;
-(id)_phoneLabels;
-(id)_namesSource;
-(void*)_voiceDialRecordAtIndex:(long long)arg1 ;
-(BOOL)_sequenceNumberIsValid:(int)arg1 ;
-(void)_handleAddressBookChanged;
@end
