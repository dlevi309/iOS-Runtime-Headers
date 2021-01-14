/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKServerChangeToken;

@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _fetchAllChanges;
	CKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;

}

@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                              //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                         //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(CKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
@end

