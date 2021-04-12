/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/PFHistoryAnalyzerObjectState.h>

@class NSManagedObjectID, NSNumber, NSDictionary, NSString;

@interface PFHistoryAnalyzerDefaultObjectState : NSObject <PFHistoryAnalyzerObjectState> {

	NSManagedObjectID* _analyzedObjectID;
	NSNumber* _originalTransactionNumber;
	long long _originalChangeType;
	NSNumber* _finalTransactionNumber;
	long long _finalChangeType;
	NSDictionary* _tombstone;
	NSString* _finalChangeAuthor;

}

@property (nonatomic,readonly) NSManagedObjectID * analyzedObjectID;              //@synthesize analyzedObjectID=_analyzedObjectID - In the implementation block
@property (nonatomic,readonly) NSNumber * originalTransactionNumber;              //@synthesize originalTransactionNumber=_originalTransactionNumber - In the implementation block
@property (nonatomic,readonly) long long originalChangeType;                      //@synthesize originalChangeType=_originalChangeType - In the implementation block
@property (nonatomic,readonly) NSNumber * finalTransactionNumber;                 //@synthesize finalTransactionNumber=_finalTransactionNumber - In the implementation block
@property (nonatomic,readonly) long long finalChangeType;                         //@synthesize finalChangeType=_finalChangeType - In the implementation block
@property (nonatomic,readonly) NSDictionary * tombstone;                          //@synthesize tombstone=_tombstone - In the implementation block
@property (nonatomic,readonly) NSString * finalChangeAuthor;                      //@synthesize finalChangeAuthor=_finalChangeAuthor - In the implementation block
-(id)description;
-(NSDictionary *)tombstone;
-(void)updateWithChange:(id)arg1 ;
-(NSNumber *)originalTransactionNumber;
-(long long)finalChangeType;
-(void)dealloc;
-(NSManagedObjectID *)analyzedObjectID;
-(NSString *)finalChangeAuthor;
-(id)initWithOriginalChange:(id)arg1 ;
-(long long)originalChangeType;
-(NSNumber *)finalTransactionNumber;
@end

