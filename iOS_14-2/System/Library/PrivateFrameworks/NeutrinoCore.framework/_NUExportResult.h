/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUImageGeometry *)geometry;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

