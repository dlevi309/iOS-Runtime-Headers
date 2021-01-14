/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NUGLObjectPool;

@interface NUGLObject : NSObject {

	unsigned _identifier;
	NUGLObjectPool* _objectPool;

}

@property (nonatomic,readonly) BOOL exists; 
@property (assign,nonatomic) unsigned identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NUGLObjectPool * objectPool;              //@synthesize objectPool=_objectPool - In the implementation block
-(void)delete;
-(BOOL)exists;
-(void)ensure:(id)arg1 ;
-(id)description;
-(void)generate:(id)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(unsigned)identifier;
-(void)dealloc;
-(void)resetGLObject;
-(NUGLObjectPool *)objectPool;
-(void)setObjectPool:(NUGLObjectPool *)arg1 ;
@end

