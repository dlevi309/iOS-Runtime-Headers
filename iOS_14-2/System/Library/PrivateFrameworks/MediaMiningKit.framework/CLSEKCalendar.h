/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSSet, NSString;

@interface CLSEKCalendar : NSObject <NSCoding> {

	BOOL _hasSharees;
	NSSet* _shareesAndOwner;
	NSString* _calendarIdentifier;

}

@property (readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (readonly) BOOL hasSharees;                            //@synthesize hasSharees=_hasSharees - In the implementation block
@property (readonly) NSSet * shareesAndOwner;                    //@synthesize shareesAndOwner=_shareesAndOwner - In the implementation block
-(NSString *)calendarIdentifier;
-(BOOL)hasSharees;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)shareesAndOwner;
-(id)initWithEKCalendar:(id)arg1 ;
@end

