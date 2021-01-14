/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUImageGeometry *)geometry;
-(void)setData:(NSDictionary *)arg1 ;
-(NSString *)description;
-(NSDictionary *)data;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
@end

