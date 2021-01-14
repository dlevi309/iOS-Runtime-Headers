/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSOrderedSet;

@interface PKIntersectionResult : NSObject {

	NSOrderedSet* _intersectedStrokes;
	long long _intersectionAlgorithmType;
	long long _contentType;

}

@property (nonatomic,retain) NSOrderedSet * intersectedStrokes;                //@synthesize intersectedStrokes=_intersectedStrokes - In the implementation block
@property (assign,nonatomic) long long intersectionAlgorithmType;              //@synthesize intersectionAlgorithmType=_intersectionAlgorithmType - In the implementation block
@property (assign,nonatomic) long long contentType;                            //@synthesize contentType=_contentType - In the implementation block
+(id)noResult;
-(long long)contentType;
-(void)setContentType:(long long)arg1 ;
-(void)setIntersectionAlgorithmType:(long long)arg1 ;
-(void)setIntersectedStrokes:(NSOrderedSet *)arg1 ;
-(long long)intersectionAlgorithmType;
-(NSOrderedSet *)intersectedStrokes;
@end

