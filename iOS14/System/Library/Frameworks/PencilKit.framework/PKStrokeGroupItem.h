/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class CHStrokeGroupQueryItem, NSArray;

@interface PKStrokeGroupItem : NSObject {

	CHStrokeGroupQueryItem* _strokeGroupItem;
	NSArray* _strokes;
	long long _contentType;
	CGRect _bounds;

}

@property (nonatomic,retain) CHStrokeGroupQueryItem * strokeGroupItem;              //@synthesize strokeGroupItem=_strokeGroupItem - In the implementation block
@property (nonatomic,copy) NSArray * strokes;                                       //@synthesize strokes=_strokes - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                         //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) long long contentType;                                 //@synthesize contentType=_contentType - In the implementation block
-(CGRect)bounds;
-(NSArray *)strokes;
-(long long)contentType;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentType:(long long)arg1 ;
-(void)setStrokes:(NSArray *)arg1 ;
-(CHStrokeGroupQueryItem *)strokeGroupItem;
-(void)setStrokeGroupItem:(CHStrokeGroupQueryItem *)arg1 ;
@end

