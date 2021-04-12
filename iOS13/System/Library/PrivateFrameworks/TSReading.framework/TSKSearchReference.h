/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSArray;


@protocol TSKSearchReference <NSObject,NSCopying>
@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights; 
@property (assign,nonatomic) BOOL pulseHighlight; 
@property (assign,nonatomic) BOOL autohideHighlight; 
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
@required
-(id)model;
-(id)selection;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id)arg1;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(id)arg1;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1;

@end

