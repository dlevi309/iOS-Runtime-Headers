/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NUExportResult.h>
#import <libobjc.A.dylib/NUImageExportResult.h>

@class NSURL, NSData, NUImageGeometry, NSString;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult> {

	NSData* _destinationData;

}

@property (retain) NSURL * destinationURL; 
@property (retain) NSData * destinationData;                         //@synthesize destinationData=_destinationData - In the implementation block
@property (readonly) NUImageGeometry * geometry; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)destinationData;
-(void)setDestinationData:(NSData *)arg1 ;
@end

