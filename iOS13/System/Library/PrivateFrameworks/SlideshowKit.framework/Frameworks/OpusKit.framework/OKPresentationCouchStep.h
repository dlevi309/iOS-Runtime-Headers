/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSMutableDictionary, NSString, NSArray;

@interface OKPresentationCouchStep : OKPresentationCanvas {

	NSMutableDictionary* _internalSettings;
	BOOL _ignoresBusiness;
	NSString* _anchorPage;
	NSString* _script;
	double _duration;
	NSArray* _dependencies;

}

@property (readonly) NSString * anchorPage;                     //@synthesize anchorPage=_anchorPage - In the implementation block
@property (readonly) NSString * script;                         //@synthesize script=_script - In the implementation block
@property (readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL ignoresBusiness;              //@synthesize ignoresBusiness=_ignoresBusiness - In the implementation block
@property (nonatomic,copy) NSArray * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
+(id)couchStepWithAnchorPageName:(id)arg1 script:(id)arg2 duration:(double)arg3 settings:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionary;
-(NSArray *)dependencies;
-(double)duration;
-(NSString *)script;
-(void)setDependencies:(NSArray *)arg1 ;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3 ;
-(NSString *)anchorPage;
-(id)parentCouch;
-(BOOL)ignoresBusiness;
-(void)setIgnoresBusiness:(BOOL)arg1 ;
@end

