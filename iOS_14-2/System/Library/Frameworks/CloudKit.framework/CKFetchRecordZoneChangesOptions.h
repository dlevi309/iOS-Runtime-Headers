/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)zoneConfiguration;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
-(BOOL)fetchChangesMadeByThisDevice;
-(BOOL)fetchNewestChangesFirst;
-(id)initWithZoneConfiguration:(id)arg1 ;
-(void)setFetchChangesMadeByThisDevice:(BOOL)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(NSArray *)desiredKeys;
-(id)initWithCoder:(id)arg1 ;
-(CKServerChangeToken *)previousServerChangeToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)resultsLimit;
@end

