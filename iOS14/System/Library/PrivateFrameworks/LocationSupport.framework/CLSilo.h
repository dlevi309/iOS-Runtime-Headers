/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(void)setGlobalConfiguration:(id)arg1 ;
+(id)main;
+(id)globalConfiguration;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
-(void)assertInside;
-(void)sync:(/*^block*/id)arg1 ;
-(void)suspend;
-(BOOL)isSuspended;
-(id)newTimer;
-(void)assertOutside;
-(void)async:(/*^block*/id)arg1 ;
-(double)currentLatchedAbsoluteTimestamp;
-(id)debugDescription;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)resume;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

