/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/MKLocalSearchCompleterDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol PKAddressSearchModelDelegate, OS_dispatch_queue;
@class NSArray, CLLocationManager, MKLocalSearchCompleter, CLGeocoder, MKLocalSearch, CNContactStore, NSObject, NSString;

@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate> {

	NSArray* _contactsSearchResults;
	NSArray* _completionSearchResults;
	NSArray* _recentsSearchResults;
	id<PKAddressSearchModelDelegate> _delegate;
	CLLocationManager* _locationManager;
	MKLocalSearchCompleter* _completer;
	CLGeocoder* _geocoder;
	MKLocalSearch* _localSearch;
	CNContactStore* _contactStore;
	NSObject*<OS_dispatch_queue> _resultsQueue;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                           //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompleter * completer;                            //@synthesize completer=_completer - In the implementation block
@property (nonatomic,retain) CLGeocoder * geocoder;                                         //@synthesize geocoder=_geocoder - In the implementation block
@property (nonatomic,retain) MKLocalSearch * localSearch;                                   //@synthesize localSearch=_localSearch - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resultsQueue;                     //@synthesize resultsQueue=_resultsQueue - In the implementation block
@property (nonatomic,readonly) NSArray * completionSearchResults; 
@property (nonatomic,readonly) NSArray * contactsSearchResults; 
@property (nonatomic,readonly) NSArray * recentsSearchResults;                              //@synthesize recentsSearchResults=_recentsSearchResults - In the implementation block
@property (assign,nonatomic,__weak) id<PKAddressSearchModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)beginSearch:(id)arg1 ;
-(void)setResultsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id<PKAddressSearchModelDelegate>)delegate;
-(MKLocalSearchCompleter *)completer;
-(NSObject*<OS_dispatch_queue>)resultsQueue;
-(void)setDelegate:(id<PKAddressSearchModelDelegate>)arg1 ;
-(void)setGeocoder:(CLGeocoder *)arg1 ;
-(CLGeocoder *)geocoder;
-(void)_updateRecents:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 ;
-(void)selectMapSearchCompletion:(id)arg1 ;
-(NSArray *)contactsSearchResults;
-(NSArray *)completionSearchResults;
-(void)_resetContactsSearchResults;
-(void)setCompleter:(MKLocalSearchCompleter *)arg1 ;
-(NSArray *)recentsSearchResults;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)endSearch;
@end

