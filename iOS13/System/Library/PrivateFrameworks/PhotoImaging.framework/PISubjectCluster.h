/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class PIReframeSubject, NSMutableSet, NSSet;

@interface PISubjectCluster : NSObject {

	BOOL _salientObject;
	float _saliencyScale;
	PIReframeSubject* _body;
	unsigned long long _direction;
	NSMutableSet* _mutablePoints;
	CGPoint _centerPoint;

}

@property (nonatomic,copy,readonly) NSMutableSet * mutablePoints;                      //@synthesize mutablePoints=_mutablePoints - In the implementation block
@property (nonatomic,readonly) float saliencyScale;                                    //@synthesize saliencyScale=_saliencyScale - In the implementation block
@property (getter=isSalientObject,nonatomic,readonly) BOOL salientObject;              //@synthesize salientObject=_salientObject - In the implementation block
@property (nonatomic,readonly) PIReframeSubject * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;                           //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) CGPoint centerPoint;                                    //@synthesize centerPoint=_centerPoint - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox; 
@property (nonatomic,copy,readonly) NSSet * points; 
@property (nonatomic,readonly) PIReframeSubject * expandedSubject; 
+(id)subjectForExpansionWithSaliencyScale:(float)arg1 startingSubject:(id)arg2 ;
+(unsigned long long)directionForBody:(id)arg1 face:(id)arg2 ;
-(id)description;
-(CGPoint)centerPoint;
-(CGRect)boundingBox;
-(unsigned long long)direction;
-(void)addPoint:(id)arg1 ;
-(NSSet *)points;
-(PIReframeSubject *)body;
-(id)initWithBody:(id)arg1 face:(id)arg2 saliencyScale:(float)arg3 ;
-(id)initSalientClusterWithCenterPoint:(CGPoint)arg1 saliencyScale:(float)arg2 ;
-(id)initWithBody:(id)arg1 direction:(unsigned long long)arg2 saliencyScale:(float)arg3 ;
-(BOOL)shouldAllowPoint:(CGPoint)arg1 ;
-(PIReframeSubject *)expandedSubject;
-(void)addPointsFromCluster:(id)arg1 ;
-(NSMutableSet *)mutablePoints;
-(float)saliencyScale;
-(BOOL)isSalientObject;
@end

