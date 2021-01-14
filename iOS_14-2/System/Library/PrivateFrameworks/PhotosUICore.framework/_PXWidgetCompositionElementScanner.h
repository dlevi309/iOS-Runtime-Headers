/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/_PXWidgetCompositionRow.h>

@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow> {

	long long _scanLocation;
	NSRange _scannedRowRange;
	NSArray* _elements;
	/*^block*/id _wantsEdgeToEdgeLayoutBlock;
	double _referenceWidth;
	double _interColumnSpacing;
	long long _maximumNumberOfColumns;

}

@property (nonatomic,copy) NSArray * elements;                              //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) id wantsEdgeToEdgeLayoutBlock;                   //@synthesize wantsEdgeToEdgeLayoutBlock=_wantsEdgeToEdgeLayoutBlock - In the implementation block
@property (assign,nonatomic) double referenceWidth;                         //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) double interColumnSpacing;                     //@synthesize interColumnSpacing=_interColumnSpacing - In the implementation block
@property (assign,nonatomic) long long maximumNumberOfColumns;              //@synthesize maximumNumberOfColumns=_maximumNumberOfColumns - In the implementation block
@property (getter=isAtEnd,nonatomic,readonly) BOOL atEnd; 
@property (nonatomic,readonly) long long numberOfColumns; 
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(BOOL)scanRow:(out id*)arg1 ;
-(double)referenceWidth;
-(long long)numberOfColumns;
-(void)setWantsEdgeToEdgeLayoutBlock:(id)arg1 ;
-(void)setMaximumNumberOfColumns:(long long)arg1 ;
-(void)setInterColumnSpacing:(double)arg1 ;
-(BOOL)_wantsEdgeToEdgeLayoutForElement:(id)arg1 ;
-(id)wantsEdgeToEdgeLayoutBlock;
-(double)interColumnSpacing;
-(long long)maximumNumberOfColumns;
-(BOOL)isAtEnd;
-(void)setReferenceWidth:(double)arg1 ;
@end

