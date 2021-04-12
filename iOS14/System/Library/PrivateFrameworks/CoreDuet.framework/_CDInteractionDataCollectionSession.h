/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate;

@interface _CDInteractionDataCollectionSession : NSObject <NSCopying, NSSecureCoding> {

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
-(NSData *)salt;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastCollectionDate;
-(id)initWithIdentifier:(id)arg1 salt:(id)arg2 latestStartDate:(id)arg3 lastCollectionDate:(id)arg4 batchNumber:(unsigned long long)arg5 ;
-(unsigned long long)batchNumber;
-(id)subsequentSessionWithlatestStartDate:(id)arg1 lastCollectionDate:(id)arg2 ;
-(BOOL)isValidForCollectionDate:(id)arg1 ;
-(NSDate *)latestStartDate;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

