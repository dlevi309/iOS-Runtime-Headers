/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIKBRTFingerInfo : NSObject <NSCopying> {

	BOOL _unknownSeen;
	double _radius;
	double _lastSeenTimestamp;
	unsigned long long _identity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double radius;                            //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double lastSeenTimestamp;                 //@synthesize lastSeenTimestamp=_lastSeenTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long identity;              //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                         //@synthesize unknownSeen=_unknownSeen - In the implementation block
@property (nonatomic,readonly) double feedbackAlpha; 
-(void)setRadius:(double)arg1 ;
-(void)setIdentity:(unsigned long long)arg1 ;
-(unsigned long long)identity;
-(CGPoint)location;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(double)feedbackAlpha;
-(void)setLocation:(CGPoint)arg1 ;
-(double)radius;
-(id)description;
-(double)lastSeenTimestamp;
-(void)setLastSeenTimestamp:(double)arg1 ;
-(BOOL)unknownSeen;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

