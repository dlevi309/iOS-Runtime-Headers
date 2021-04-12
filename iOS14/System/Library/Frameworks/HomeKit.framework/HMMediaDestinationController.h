/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMMediaDestinationControllerDelegate, HMMediaDestinationControllerDataSource;
@class HMFUnfairLock, NSArray, NSUUID, _HMContext, NSString;

@interface HMMediaDestinationController : NSObject <HMFLogging, HMObjectMerge, HMFObject> {

	HMFUnfairLock* _lock;
	NSArray* _availableDestinationIdentifiers;
	NSUUID* _destinationIdentifier;
	id<HMMediaDestinationControllerDelegate> _delegate;
	NSUUID* _identifier;
	id<HMMediaDestinationControllerDataSource> _dataSource;
	_HMContext* _context;

}

@property (__weak) id<HMMediaDestinationControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) _HMContext * context;                                               //@synthesize context=_context - In the implementation block
@property (copy) NSUUID * destinationIdentifier;                                       //@synthesize destinationIdentifier=_destinationIdentifier - In the implementation block
@property (copy) NSArray * availableDestinationIdentifiers;                            //@synthesize availableDestinationIdentifiers=_availableDestinationIdentifiers - In the implementation block
@property (__weak) id<HMMediaDestinationControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSUUID * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSArray * availableDestinations; 
@property (readonly) id<HMMediaDestination> destination; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(id)shortDescription;
-(NSString *)privateDescription;
-(id<HMMediaDestinationControllerDelegate>)delegate;
-(NSString *)shortDescription;
-(NSUUID *)uniqueIdentifier;
-(id<HMMediaDestinationControllerDataSource>)dataSource;
-(id)logIdentifier;
-(_HMContext *)context;
-(void)setDelegate:(id<HMMediaDestinationControllerDelegate>)arg1 ;
-(NSString *)description;
-(void)setDataSource:(id<HMMediaDestinationControllerDataSource>)arg1 ;
-(NSArray *)attributeDescriptions;
-(void)updateDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)hash;
-(NSUUID *)destinationIdentifier;
-(NSUUID *)identifier;
-(NSArray *)availableDestinationIdentifiers;
-(id)initWithIdentifier:(id)arg1 destinationIdentifier:(id)arg2 availableDestinationIdentifiers:(id)arg3 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)callCompletionHandler:(/*^block*/id)arg1 ;
-(void)unconfigure;
-(BOOL)availableDestinationIdentifiersIsEqualToIdentifiers:(id)arg1 ;
-(void)notifyDidUpdateDestination;
-(void)notifyDidUpdateAvailableDestinations;
-(id)initWithControllerData:(id)arg1 ;
-(void)setDestinationIdentifier:(NSUUID *)arg1 ;
-(void)updateDestination:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureWithContext:(id)arg1 dataSource:(id)arg2 ;
-(void)setAvailableDestinationIdentifiers:(NSArray *)arg1 ;
-(NSArray *)availableDestinations;
-(id<HMMediaDestination>)destination;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

