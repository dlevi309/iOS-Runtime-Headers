/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)direction;
-(PIReframeSubject *)body;
-(void)addPoint:(id)arg1 ;
-(id)description;
-(CGRect)boundingBox;
-(CGPoint)centerPoint;
-(NSSet *)points;
-(NSMutableSet *)mutablePoints;
-(id)initWithBody:(id)arg1 face:(id)arg2 saliencyScale:(float)arg3 ;
-(id)initSalientClusterWithCenterPoint:(CGPoint)arg1 saliencyScale:(float)arg2 ;
-(id)initWithBody:(id)arg1 direction:(unsigned long long)arg2 saliencyScale:(float)arg3 ;
-(BOOL)shouldAllowPoint:(CGPoint)arg1 ;
-(PIReframeSubject *)expandedSubject;
-(void)addPointsFromCluster:(id)arg1 ;
-(float)saliencyScale;
-(BOOL)isSalientObject;
@end

