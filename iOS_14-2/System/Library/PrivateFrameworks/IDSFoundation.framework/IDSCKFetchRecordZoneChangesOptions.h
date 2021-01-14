/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSCKServerChangeToken, NSArray;

@interface IDSCKFetchRecordZoneChangesOptions : NSObject <NSSecureCoding, NSCopying> {

	IDSCKServerChangeToken* _previousServerChangeToken;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;

}

@property (nonatomic,copy) IDSCKServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                               //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                           //@synthesize desiredKeys=_desiredKeys - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setPreviousServerChangeToken:(IDSCKServerChangeToken *)arg1 ;
-(NSArray *)desiredKeys;
-(IDSCKServerChangeToken *)previousServerChangeToken;
-(unsigned long long)resultsLimit;
@end

