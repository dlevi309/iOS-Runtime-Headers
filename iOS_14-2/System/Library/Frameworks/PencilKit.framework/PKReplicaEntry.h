/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding> {

	unsigned _replicaUUIDIndex;
	unsigned _clock;
	unsigned _subclock;
	BOOL _inUse;
	PKDrawing* _drawing;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;              //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (assign,nonatomic) unsigned clock;                         //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned subclock;                      //@synthesize subclock=_subclock - In the implementation block
@property (assign,nonatomic) BOOL inUse;                             //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) PKDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
-(unsigned)clock;
-(void)setClock:(unsigned)arg1 ;
-(unsigned)subclock;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSubclock:(unsigned)arg1 ;
-(id)description;
-(PKDrawing *)drawing;
-(unsigned)replicaUUIDIndex;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(BOOL)inUse;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clock:(unsigned)arg2 subclock:(unsigned)arg3 inUse:(BOOL)arg4 forDrawing:(id)arg5 ;
@end

