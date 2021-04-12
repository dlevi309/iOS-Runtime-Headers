/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearchReference.h>

@protocol TSKAnnotation;
@class TSTTableInfo, NSArray, NSString;

@interface TSTSearchReference : NSObject <TSKSearchReference> {

	TSTTableInfo* _tableInfo;
	SCD_Struct_TS140 _cellID;
	NSRange _range;
	BOOL _autohideHighlight;
	BOOL _pulseHighlight;
	NSArray* _findHighlights;
	id<TSKAnnotation> annotation;
	CGPoint searchReferencePoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights;                  //@synthesize findHighlights=_findHighlights - In the implementation block
@property (assign,nonatomic) BOOL pulseHighlight;                       //@synthesize pulseHighlight=_pulseHighlight - In the implementation block
@property (assign,nonatomic) BOOL autohideHighlight;                    //@synthesize autohideHighlight=_autohideHighlight - In the implementation block
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
+(id)searchReferenceWithTableInfo:(id)arg1 cellID:(SCD_Struct_TS140)arg2 range:(NSRange)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)range;
-(id)model;
-(void)setRange:(NSRange)arg1 ;
-(id)selection;
-(id<TSKAnnotation>)annotation;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(NSArray *)arg1 ;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1 ;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1 ;
-(id)tableInfo;
-(SCD_Struct_TS140)cellID;
-(id)initWithTableInfo:(id)arg1 cellID:(SCD_Struct_TS140)arg2 range:(NSRange)arg3 ;
-(void)setCellID:(SCD_Struct_TS140)arg1 ;
@end

