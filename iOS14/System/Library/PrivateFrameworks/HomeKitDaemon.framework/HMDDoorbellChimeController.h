/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>

@protocol HMDDoorbellChimeControllerContext;
@class NSSet, NSDate, NSString;

@interface HMDDoorbellChimeController : NSObject <HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate> {

	NSSet* _availableCharacteristics;
	NSDate* _lastUnidentifiedChimeDate;
	id<HMDDoorbellChimeControllerContext> _context;

}

@property (retain) NSSet * availableCharacteristics;                           //@synthesize availableCharacteristics=_availableCharacteristics - In the implementation block
@property (retain) NSDate * lastUnidentifiedChimeDate;                         //@synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate - In the implementation block
@property (retain) id<HMDDoorbellChimeControllerContext> context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id)logIdentifier;
-(id<HMDDoorbellChimeControllerContext>)context;
-(id)clientIdentifier;
-(void)configureWithContext:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id<HMDDoorbellChimeControllerContext>)arg1 ;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(void)_handleCharacteristicsValueUpdated:(id)arg1 ;
-(void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)arg1 attemptCloudPullIfNoPersonsFound:(BOOL)arg2 ;
-(void)handleCharacteristicsValueUpdated:(id)arg1 ;
-(NSDate *)lastUnidentifiedChimeDate;
-(void)setLastUnidentifiedChimeDate:(NSDate *)arg1 ;
-(void)setAvailableCharacteristics:(NSSet *)arg1 ;
-(NSSet *)availableCharacteristics;
-(void)handleUpdatedPersonIdentificationInformation;
@end

