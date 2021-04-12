/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)script;
-(id)init;
-(NSArray *)dependencies;
-(id)dictionary;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setDependencies:(NSArray *)arg1 ;
-(void)resolveIfNeeded;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andCouch:(id)arg3 ;
-(NSString *)anchorPage;
-(id)parentCouch;
-(BOOL)ignoresBusiness;
-(void)setIgnoresBusiness:(BOOL)arg1 ;
@end

