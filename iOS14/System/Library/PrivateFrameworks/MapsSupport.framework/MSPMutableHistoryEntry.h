/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPHistoryEntry.h>
#import <libobjc.A.dylib/MSPMutableObject.h>

@class NSDate, NSUUID, MSPHistoryEntryStorage, NSString;

@interface MSPMutableHistoryEntry : NSObject <MSPHistoryEntry, MSPMutableObject> {

	BOOL _immutable;
	NSUUID* _storageIdentifier;
	NSDate* _usageDate;
	MSPHistoryEntryStorage* _storage;

}

@property (getter=_isImmutable,nonatomic,readonly) BOOL immutable;                                   //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;                                     //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy) NSDate * usageDate;                                                       //@synthesize usageDate=_usageDate - In the implementation block
@property (assign,getter=tracksRAPReportingOnly,nonatomic) BOOL tracksRAPReportingOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableHistoryEntryForStorage:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)init;
-(id)debugTitle;
-(MSPHistoryEntryStorage *)storage;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)usageDate;
-(NSString *)description;
-(id)storageIdentifier;
-(BOOL)isFailed;
-(void)ifSearch:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifPlaceDisplay:(/*^block*/id)arg3 ifTransitLineItem:(/*^block*/id)arg4 ;
-(BOOL)isUserVisibleDuplicateOfEntry:(id)arg1 ;
-(BOOL)tracksRAPReportingOnly;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(id)copyIfValidWithError:(out id*)arg1 ;
-(void)_noteWillMutate;
-(void)ifMutableSearch:(/*^block*/id)arg1 ifMutableRoute:(/*^block*/id)arg2 ifMutablePlaceDisplay:(/*^block*/id)arg3 ifMutableTransitLineItem:(/*^block*/id)arg4 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(void)setUsageDate:(NSDate *)arg1 ;
-(void)setTracksRAPReportingOnly:(BOOL)arg1 ;
-(void)_markImmutable;
-(BOOL)_isImmutable;
@end
