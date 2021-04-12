/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate;

@interface _CDDataCollectionSession : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSData* _salt;
	NSDate* _latestStartDate;
	NSDate* _lastCollectionDate;
	unsigned long long _batchNumber;

}

@property (nonatomic,copy,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * salt;                            //@synthesize salt=_salt - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestStartDate;                 //@synthesize latestStartDate=_latestStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastCollectionDate;              //@synthesize lastCollectionDate=_lastCollectionDate - In the implementation block
@property (nonatomic,readonly) unsigned long long batchNumber;                //@synthesize batchNumber=_batchNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)generateNewSession;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 salt:(id)arg2 latestStartDate:(id)arg3 lastCollectionDate:(id)arg4 batchNumber:(unsigned long long)arg5 ;
-(NSDate *)latestStartDate;
-(NSData *)salt;
-(unsigned long long)batchNumber;
-(NSDate *)lastCollectionDate;
-(id)subsequentSessionWithlatestStartDate:(id)arg1 lastCollectionDate:(id)arg2 ;
-(BOOL)isValidForCollectionDate:(id)arg1 ;
@end

