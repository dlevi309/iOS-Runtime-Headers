/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSMutableArray, NSDate, NSError, PKFamilyMember, NSArray;

@interface PKAppleCashSharingRecipientCapabilitiesFetchStatus : NSObject {

	NSMutableArray* _fetchedCapabilities;
	BOOL _fetchInProgress;
	long long _maximumPossibleDevices;
	NSDate* _fetchStartDate;
	NSError* _fetchError;
	PKFamilyMember* _familyMember;

}

@property (nonatomic,copy) NSArray * fetchedCapabilities;                   //@synthesize fetchedCapabilities=_fetchedCapabilities - In the implementation block
@property (assign,nonatomic) long long maximumPossibleDevices;              //@synthesize maximumPossibleDevices=_maximumPossibleDevices - In the implementation block
@property (assign,nonatomic) BOOL fetchInProgress;                          //@synthesize fetchInProgress=_fetchInProgress - In the implementation block
@property (nonatomic,copy) NSError * fetchError;                            //@synthesize fetchError=_fetchError - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fetchStartDate;                //@synthesize fetchStartDate=_fetchStartDate - In the implementation block
@property (nonatomic,readonly) PKFamilyMember * familyMember;               //@synthesize familyMember=_familyMember - In the implementation block
-(void)addAppleCashSharingRecipientCapabilities:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 fetchStartDate:(id)arg2 ;
-(void)setMaximumPossibleDevices:(long long)arg1 ;
-(long long)maximumPossibleDevices;
-(void)setFetchedCapabilities:(NSArray *)arg1 ;
-(NSDate *)fetchStartDate;
-(NSError *)fetchError;
-(PKFamilyMember *)familyMember;
-(id)description;
-(void)setFetchError:(NSError *)arg1 ;
-(BOOL)fetchInProgress;
-(void)setFetchInProgress:(BOOL)arg1 ;
-(long long)secondsPassedSinceFetchStart;
-(BOOL)allPossibleCapabilitiesFetched;
-(NSArray *)fetchedCapabilities;
@end

