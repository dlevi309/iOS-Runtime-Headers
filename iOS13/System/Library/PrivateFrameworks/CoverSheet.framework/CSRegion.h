/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UICoordinateSpace.h>

@protocol UICoordinateSpace;
@class NSString;

@interface CSRegion : NSObject <NSCopying, UICoordinateSpace> {

	BOOL _hidden;
	BOOL _reservedForHorizontalScrolling;
	NSString* _identifier;
	long long _role;
	id<UICoordinateSpace> _coordinateSpace;
	id<UICoordinateSpace> _identity;
	id _provider;
	CGRect _extent;

}

@property (nonatomic,__weak,readonly) id<UICoordinateSpace> coordinateSpace;                                           //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) CGRect extent;                                                                          //@synthesize extent=_extent - In the implementation block
@property (assign,nonatomic) long long role;                                                                           //@synthesize role=_role - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> identity;                                                    //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic,__weak) id provider;                                                                       //@synthesize provider=_provider - In the implementation block
@property (assign,getter=isReservedForHorizontalScrolling,nonatomic) BOOL reservedForHorizontalScrolling;              //@synthesize reservedForHorizontalScrolling=_reservedForHorizontalScrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)regionForCoordinateSpace:(id)arg1 ;
+(id)regionForCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)role;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setProvider:(id)arg1 ;
-(BOOL)isHidden;
-(id<UICoordinateSpace>)identity;
-(CGRect)extent;
-(CGRect)bounds;
-(void)setIdentity:(id<UICoordinateSpace>)arg1 ;
-(id)provider;
-(void)setHidden:(BOOL)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)setRole:(long long)arg1 ;
-(id)regionForCoordinateSpace:(id)arg1 ;
-(id)role:(long long)arg1 ;
-(BOOL)isReservedForHorizontalScrolling;
-(BOOL)intersectsCoordinateSpace:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 withExtent:(CGRect)arg2 role:(long long)arg3 ;
-(void)setReservedForHorizontalScrolling:(BOOL)arg1 ;
@end

