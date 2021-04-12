/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/NetworkAnalyticsStateRelay.h>

@class NSString, NSNumber;

@interface CellularStateRelay : NetworkAnalyticsStateRelay {

	char _nrServingCellType;
	char _nrFrequencyBand;
	BOOL _cellRrcConnected;
	BOOL _ratSelectionIsNR;
	int _cellMNC;
	int _cellMCC;
	int _cellUARFCN;
	int _cellPID;
	int _cellBandInfo;
	int _cellBandwidth;
	int _cellTAC;
	NSString* _cellType;
	NSNumber* _ratSelectionMask;
	NSString* _ratSelectionCurrent;
	NSString* _ratSelectionPreferred;
	unsigned long long _cellSPIType;

}

@property (assign) char nrServingCellType;                        //@synthesize nrServingCellType=_nrServingCellType - In the implementation block
@property (assign) char nrFrequencyBand;                          //@synthesize nrFrequencyBand=_nrFrequencyBand - In the implementation block
@property (assign) int cellMNC;                                   //@synthesize cellMNC=_cellMNC - In the implementation block
@property (assign) int cellMCC;                                   //@synthesize cellMCC=_cellMCC - In the implementation block
@property (assign) int cellUARFCN;                                //@synthesize cellUARFCN=_cellUARFCN - In the implementation block
@property (assign) int cellPID;                                   //@synthesize cellPID=_cellPID - In the implementation block
@property (assign) int cellBandInfo;                              //@synthesize cellBandInfo=_cellBandInfo - In the implementation block
@property (retain) NSString * cellType;                           //@synthesize cellType=_cellType - In the implementation block
@property (assign) int cellBandwidth;                             //@synthesize cellBandwidth=_cellBandwidth - In the implementation block
@property (assign) int cellTAC;                                   //@synthesize cellTAC=_cellTAC - In the implementation block
@property (assign,nonatomic) BOOL cellRrcConnected;               //@synthesize cellRrcConnected=_cellRrcConnected - In the implementation block
@property (assign,nonatomic) BOOL ratSelectionIsNR;               //@synthesize ratSelectionIsNR=_ratSelectionIsNR - In the implementation block
@property (retain) NSNumber * ratSelectionMask;                   //@synthesize ratSelectionMask=_ratSelectionMask - In the implementation block
@property (retain) NSString * ratSelectionCurrent;                //@synthesize ratSelectionCurrent=_ratSelectionCurrent - In the implementation block
@property (retain) NSString * ratSelectionPreferred;              //@synthesize ratSelectionPreferred=_ratSelectionPreferred - In the implementation block
@property (assign) unsigned long long cellSPIType;                //@synthesize cellSPIType=_cellSPIType - In the implementation block
-(NSString *)cellType;
-(void)setCellType:(NSString *)arg1 ;
-(int)cellMCC;
-(int)cellMNC;
-(int)cellPID;
-(int)cellTAC;
-(id)initForInternalType:(long long)arg1 ;
-(id)extendedDescription;
-(void)setNrFrequencyBand:(char)arg1 ;
-(char)nrFrequencyBand;
-(void)setCellRrcConnected:(BOOL)arg1 ;
-(void)setCellMCC:(int)arg1 ;
-(void)setCellMNC:(int)arg1 ;
-(void)setCellUARFCN:(int)arg1 ;
-(void)setCellPID:(int)arg1 ;
-(void)setCellBandInfo:(int)arg1 ;
-(void)setCellBandwidth:(int)arg1 ;
-(void)setCellTAC:(int)arg1 ;
-(int)cellUARFCN;
-(int)cellBandInfo;
-(int)cellBandwidth;
-(void)updateCellInfo:(id)arg1 ;
-(char)nrServingCellType;
-(void)setNrServingCellType:(char)arg1 ;
-(BOOL)cellRrcConnected;
-(NSNumber *)ratSelectionMask;
-(void)setRatSelectionMask:(NSNumber *)arg1 ;
-(NSString *)ratSelectionCurrent;
-(void)setRatSelectionCurrent:(NSString *)arg1 ;
-(NSString *)ratSelectionPreferred;
-(void)setRatSelectionPreferred:(NSString *)arg1 ;
-(unsigned long long)cellSPIType;
-(void)setCellSPIType:(unsigned long long)arg1 ;
-(BOOL)ratSelectionIsNR;
-(void)setRatSelectionIsNR:(BOOL)arg1 ;
@end

