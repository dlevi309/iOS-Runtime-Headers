/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

@class CDPContext;


@protocol CDPDOctagonTrustProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(CDPContext *)cdpContext;
-(id)initWithContext:(id)arg1;
-(void)setCdpContext:(id)arg1;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3;

@end

