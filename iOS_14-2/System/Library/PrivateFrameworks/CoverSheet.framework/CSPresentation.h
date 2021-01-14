/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/CSPresentationProviding.h>
#import <UIKit/UICoordinateSpace.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSArray, NSMutableArray, NSString;

@interface CSPresentation : NSObject <CSPresentationProviding, UICoordinateSpace, NSCopying> {

	NSMutableArray* _regions;
	id<UICoordinateSpace> _coordinateSpace;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                            //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                                                //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)presentationForProvider:(id)arg1 ;
+(id)presentationWithCoordinateSpace:(id)arg1 ;
+(id)presentation;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(CGRect)bounds;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(id)succinctDescription;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(NSArray *)presentationRegions;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)addRegion:(id)arg1 ;
-(id)init;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)presentationForRole:(long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)intersectsCoordinateSpace:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(NSArray *)regions;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(long long)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)unionPresentation:(id)arg1 ;
-(NSString *)description;
-(UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(CGRect)arg1 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)regionsIntersectingCoordinateSpace:(id)arg1 ;
@end

