/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUVideoPropertiesResult.h>

@protocol NUVideoProperties;
@class NSString;

@interface _NUVideoPropertiesResult : _NURenderResult <NUVideoPropertiesResult> {

	id<NUVideoProperties> _properties;

}

@property (retain) id<NUVideoProperties> properties;                 //@synthesize properties=_properties - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUVideoProperties>)properties;
-(void)setProperties:(id<NUVideoProperties>)arg1 ;
@end

