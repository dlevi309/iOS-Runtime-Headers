/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImagePropertiesResult.h>

@protocol NUImageProperties;
@class NSString;

@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult> {

	id<NUImageProperties> _properties;

}

@property (retain) id<NUImageProperties> properties;                 //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSString *)description;
-(id<NUImageProperties>)properties;
-(void)setProperties:(id<NUImageProperties>)arg1 ;
@end

