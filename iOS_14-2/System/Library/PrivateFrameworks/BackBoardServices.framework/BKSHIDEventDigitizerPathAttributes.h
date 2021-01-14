/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class BKSHIDEventAuthenticationMessage, NSString;

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable> {

	unsigned char _locus;
	unsigned _touchIdentifier;
	unsigned _userIdentifier;
	float _zGradient;
	long long _pathIndex;
	double _hitTestLocationX;
	double _hitTestLocationY;
	double _preciseLocationX;
	double _preciseLocationY;
	BKSHIDEventAuthenticationMessage* _authenticationMessage;

}

@property (assign,nonatomic) long long pathIndex;                                                   //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned touchIdentifier;                                              //@synthesize touchIdentifier=_touchIdentifier - In the implementation block
@property (assign,nonatomic) unsigned userIdentifier;                                               //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (assign,nonatomic) unsigned char locus;                                                   //@synthesize locus=_locus - In the implementation block
@property (assign,nonatomic) float zGradient;                                                       //@synthesize zGradient=_zGradient - In the implementation block
@property (assign,nonatomic) double hitTestLocationX;                                               //@synthesize hitTestLocationX=_hitTestLocationX - In the implementation block
@property (assign,nonatomic) double hitTestLocationY;                                               //@synthesize hitTestLocationY=_hitTestLocationY - In the implementation block
@property (assign,nonatomic) double preciseLocationX;                                               //@synthesize preciseLocationX=_preciseLocationX - In the implementation block
@property (assign,nonatomic) double preciseLocationY;                                               //@synthesize preciseLocationY=_preciseLocationY - In the implementation block
@property (nonatomic,retain) BKSHIDEventAuthenticationMessage * authenticationMessage;              //@synthesize authenticationMessage=_authenticationMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(unsigned)userIdentifier;
-(double)hitTestLocationY;
-(unsigned char)locus;
-(void)setZGradient:(float)arg1 ;
-(float)zGradient;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(unsigned)touchIdentifier;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)setTouchIdentifier:(unsigned)arg1 ;
-(void)setAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
-(BKSHIDEventAuthenticationMessage *)authenticationMessage;
-(long long)pathIndex;
-(NSString *)description;
-(double)preciseLocationY;
-(void)setHitTestLocationY:(double)arg1 ;
-(void)setLocus:(unsigned char)arg1 ;
-(void)setPathIndex:(long long)arg1 ;
-(double)hitTestLocationX;
-(void)setHitTestLocationX:(double)arg1 ;
-(void)setPreciseLocationY:(double)arg1 ;
-(double)preciseLocationX;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPreciseLocationX:(double)arg1 ;
@end

