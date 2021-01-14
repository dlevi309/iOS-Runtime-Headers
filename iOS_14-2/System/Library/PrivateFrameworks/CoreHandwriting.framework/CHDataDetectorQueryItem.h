/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject {

	const CGPathRef _estimatedBaseline;
	NSSet* _strokeIdentifiers;
	DDScannerResult* _dataDetectorResult;

}

@property (nonatomic,copy,readonly) NSSet * strokeIdentifiers;                           //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,retain,readonly) DDScannerResult * dataDetectorResult;              //@synthesize dataDetectorResult=_dataDetectorResult - In the implementation block
@property (nonatomic,readonly) const CGPathRef estimatedBaseline;                        //@synthesize estimatedBaseline=_estimatedBaseline - In the implementation block
-(id)description;
-(DDScannerResult *)dataDetectorResult;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSSet *)strokeIdentifiers;
-(const CGPathRef)estimatedBaseline;
-(BOOL)isEqualToDataDetectorQueryItem:(id)arg1 ;
-(id)initWithStrokeIdentifiers:(id)arg1 detectedResult:(id)arg2 estimatedBaseline:(CGPathRef)arg3 ;
@end

