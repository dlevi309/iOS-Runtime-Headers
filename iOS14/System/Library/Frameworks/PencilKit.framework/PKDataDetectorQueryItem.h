/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class CHDataDetectorQueryItem, NSSet, DDScannerResult, UIBezierPath;

@interface PKDataDetectorQueryItem : NSObject {

	CHDataDetectorQueryItem* _coreHandwritingDataDetectorQueryItem;

}

@property (nonatomic,retain) CHDataDetectorQueryItem * coreHandwritingDataDetectorQueryItem;              //@synthesize coreHandwritingDataDetectorQueryItem=_coreHandwritingDataDetectorQueryItem - In the implementation block
@property (nonatomic,readonly) NSSet * strokeIdentifiers; 
@property (nonatomic,readonly) DDScannerResult * scannerResult; 
@property (nonatomic,readonly) UIBezierPath * baselinePath; 
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)strokeIdentifiers;
-(CHDataDetectorQueryItem *)coreHandwritingDataDetectorQueryItem;
-(id)initWithCoreHandwritingDataDetectorQueryItem:(id)arg1 ;
-(DDScannerResult *)scannerResult;
-(UIBezierPath *)baselinePath;
-(void)setCoreHandwritingDataDetectorQueryItem:(CHDataDetectorQueryItem *)arg1 ;
@end

