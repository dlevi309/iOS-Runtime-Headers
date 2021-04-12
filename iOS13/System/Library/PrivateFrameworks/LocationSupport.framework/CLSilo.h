/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/LocationSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)main;
+(void)setGlobalConfiguration:(id)arg1 ;
+(id)globalConfiguration;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)resume;
-(id)initWithIdentifier:(id)arg1 ;
-(void)suspend;
-(id)newTimer;
-(void)async:(/*^block*/id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(double)currentLatchedAbsoluteTimestamp;
-(void)sync:(/*^block*/id)arg1 ;
-(void)afterInterval:(double)arg1 async:(/*^block*/id)arg2 ;
@end

