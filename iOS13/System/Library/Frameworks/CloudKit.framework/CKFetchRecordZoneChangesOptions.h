/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKServerChangeToken, NSArray;

@interface CKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _fetchNewestChangesFirst;
	BOOL _fetchChangesMadeByThisDevice;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;

}

@property (assign,nonatomic) BOOL fetchNewestChangesFirst;                               //@synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst - In the implementation block
@property (assign,nonatomic) BOOL fetchChangesMadeByThisDevice;                          //@synthesize fetchChangesMadeByThisDevice=_fetchChangesMadeByThisDevice - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                            //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                        //@synthesize desiredKeys=_desiredKeys - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
-(NSArray *)desiredKeys;
-(BOOL)fetchNewestChangesFirst;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
-(BOOL)fetchChangesMadeByThisDevice;
-(void)setFetchChangesMadeByThisDevice:(BOOL)arg1 ;
-(id)initWithZoneConfiguration:(id)arg1 ;
-(id)zoneConfiguration;
@end

