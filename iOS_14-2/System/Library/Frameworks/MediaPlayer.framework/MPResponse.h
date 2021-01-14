/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MPResponse : NSObject <_MPStateDumpPropertyListTransformable, NSCopying> {

	BOOL _valid;
	id _request;
	NSArray* _middleware;
	id _builder;

}

@property (nonatomic,copy) NSArray * middleware;                       //@synthesize middleware=_middleware - In the implementation block
@property (nonatomic,readonly) id builder;                             //@synthesize builder=_builder - In the implementation block
@property (nonatomic,copy,readonly) id request;                        //@synthesize request=_request - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderProtocol;
-(void)setMiddleware:(NSArray *)arg1 ;
-(id)chain;
-(id)request;
-(NSString *)description;
-(BOOL)isValid;
-(id)_stateDumpObject;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(void)invalidate;
-(NSArray *)middleware;
-(id)builder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

