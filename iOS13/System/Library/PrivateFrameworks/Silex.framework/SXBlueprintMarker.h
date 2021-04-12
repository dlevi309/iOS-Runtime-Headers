/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXBlueprintMarker.h>
@class NSArray;


@protocol SXBlueprintMarker <NSObject>
@property (nonatomic,readonly) id<SXComponent> leadingComponent; 
@property (nonatomic,readonly) id<SXComponent> trailingComponent; 
@property (nonatomic,readonly) CGPoint approximateLocation; 
@property (nonatomic,readonly) NSArray * path; 
@property (nonatomic,retain) id<SXComponentAnchor> componentAnchor; 
@required
-(NSArray *)path;
-(CGPoint)approximateLocation;
-(id<SXComponentAnchor>)componentAnchor;
-(void)setComponentAnchor:(id)arg1;
-(id<SXComponent>)leadingComponent;
-(id<SXComponent>)trailingComponent;
-(BOOL)isEqualToMarker:(id)arg1;

@end


@protocol SXComponent, SXComponentAnchor;
@class NSArray, NSString;

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker> {

	id<SXComponent> _leadingComponent;
	id<SXComponent> _trailingComponent;
	NSArray* _path;
	id<SXComponentAnchor> _componentAnchor;
	CGPoint _approximateLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXComponent> leadingComponent;                 //@synthesize leadingComponent=_leadingComponent - In the implementation block
@property (nonatomic,readonly) id<SXComponent> trailingComponent;                //@synthesize trailingComponent=_trailingComponent - In the implementation block
@property (nonatomic,readonly) CGPoint approximateLocation;                      //@synthesize approximateLocation=_approximateLocation - In the implementation block
@property (nonatomic,readonly) NSArray * path;                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id<SXComponentAnchor> componentAnchor;              //@synthesize componentAnchor=_componentAnchor - In the implementation block
-(NSString *)description;
-(NSArray *)path;
-(CGPoint)approximateLocation;
-(id<SXComponentAnchor>)componentAnchor;
-(id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(CGPoint)arg3 path:(id)arg4 ;
-(void)setComponentAnchor:(id<SXComponentAnchor>)arg1 ;
-(id<SXComponent>)leadingComponent;
-(id<SXComponent>)trailingComponent;
-(BOOL)isEqualToMarker:(id)arg1 ;
@end

