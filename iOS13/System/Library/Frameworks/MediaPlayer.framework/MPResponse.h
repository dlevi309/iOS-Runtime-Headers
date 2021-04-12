/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)request;
-(id)builder;
-(id)_stateDumpObject;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
-(id)chain;
-(NSArray *)middleware;
-(void)setMiddleware:(NSArray *)arg1 ;
@end

