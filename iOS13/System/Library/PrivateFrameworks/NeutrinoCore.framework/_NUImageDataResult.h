/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImageDataResult.h>

@class NSDictionary, NUImageGeometry, NSString;

@interface _NUImageDataResult : _NURenderResult <NUImageDataResult> {

	NSDictionary* _data;
	NUImageGeometry* _geometry;

}

@property (copy) NSDictionary * data;                                //@synthesize data=_data - In the implementation block
@property (retain) NUImageGeometry * geometry;                       //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSString *)description;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

