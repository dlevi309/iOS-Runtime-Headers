/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUExportResult.h>

@class NSURL, NUImageGeometry, NSString;

@interface _NUExportResult : _NURenderResult <NUExportResult> {

	NSURL* _destinationURL;
	NUImageGeometry* _geometry;

}

@property (retain) NSURL * destinationURL;                           //@synthesize destinationURL=_destinationURL - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

