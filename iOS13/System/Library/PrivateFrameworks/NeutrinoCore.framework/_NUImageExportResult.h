/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NUExportResult.h>
#import <libobjc.A.dylib/NUImageExportResult.h>

@class NSURL, NSData, NSString, NUImageGeometry;

@interface _NUImageExportResult : _NUExportResult <NUImageExportResult> {

	NSData* _destinationData;

}

@property (retain) NSURL * destinationURL; 
@property (retain) NSData * destinationData;                         //@synthesize destinationData=_destinationData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NUImageGeometry * geometry; 
-(NSData *)destinationData;
-(void)setDestinationData:(NSData *)arg1 ;
@end

