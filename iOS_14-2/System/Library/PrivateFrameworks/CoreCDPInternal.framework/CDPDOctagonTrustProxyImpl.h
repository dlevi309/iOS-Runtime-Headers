/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDOctagonTrustProxy.h>

@class CDPContext, NSString;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy> {

	CDPContext* _cdpContext;

}

@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CDPContext *)cdpContext;
-(id)initWithContext:(id)arg1 ;
-(void)setCdpContext:(CDPContext *)arg1 ;
-(id)fetchEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
-(id)fetchAllEscrowRecords:(id)arg1 forceFetch:(BOOL)arg2 error:(id*)arg3 ;
@end

