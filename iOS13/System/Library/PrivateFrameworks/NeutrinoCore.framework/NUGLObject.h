/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)delete;
-(BOOL)exists;
-(void)generate:(id)arg1 ;
-(void)ensure:(id)arg1 ;
-(void)resetGLObject;
-(NUGLObjectPool *)objectPool;
-(void)setObjectPool:(NUGLObjectPool *)arg1 ;
@end

