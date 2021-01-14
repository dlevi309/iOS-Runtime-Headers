/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSContextualEvent.h>

@class NSString;

@interface TPSContextualContentStatusEvent : TPSContextualEvent {

	long long _statusType;
	NSString* _contentID;

}

@property (assign,nonatomic) long long statusType;              //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,copy) NSString * contentID;                //@synthesize contentID=_contentID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setStatusType:(long long)arg1 ;
-(long long)statusType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(unsigned)minObservationCount;
-(void)updateStatusTypeIfOutOfBound;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

