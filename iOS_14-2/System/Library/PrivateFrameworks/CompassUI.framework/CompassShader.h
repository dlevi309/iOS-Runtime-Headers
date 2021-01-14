/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
*/


@class NSMutableDictionary, NSArray, NSString;

@interface CompassShader : NSObject {

	NSMutableDictionary* _uniforms;
	NSArray* _uniformNames;
	NSString* _fragmentName;
	NSString* _vertexName;
	unsigned _program;

}

@property (assign,nonatomic) unsigned program;              //@synthesize program=_program - In the implementation block
-(void)use;
-(void)setProgram:(unsigned)arg1 ;
-(unsigned)program;
-(void)dealloc;
-(id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3 ;
-(BOOL)loadShader;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 file:(id)arg3 ;
-(BOOL)linkProgram:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 uniformNames:(id)arg2 ;
-(int)locationForUniform:(id)arg1 ;
-(BOOL)validateProgram:(unsigned)arg1 ;
@end

