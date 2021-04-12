/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying> {

	long long _type;
	double _level;
	long long _alignment;
	unsigned _contextID;
	NSString* _externalSceneID;
	unsigned _sceneID;

}

@property (assign,nonatomic) unsigned sceneID;                      //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) double level;                          //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * externalSceneID;              //@synthesize externalSceneID=_externalSceneID - In the implementation block
@property (nonatomic,readonly) long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithFBSSceneLayer:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(double)level;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(unsigned)contextID;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLevel:(double)arg1 ;
-(NSString *)externalSceneID;
-(unsigned)sceneID;
-(void)setSceneID:(unsigned)arg1 ;
-(id)initWithContextID:(unsigned)arg1 ;
-(id)initWithExternalSceneID:(id)arg1 ;
-(void)setExternalSceneID:(NSString *)arg1 ;
@end

