/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDataRecordValueTransformerFactory.h>

@protocol SXDataRecordValueTransformerFactory <NSObject>
@required
-(id)recordValueTransformerForDataDescriptor:(id)arg1;

@end


@protocol SXDOMObjectProviding;
@class NSString;

@interface SXDataRecordValueTransformerFactory : NSObject <SXDataRecordValueTransformerFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id)recordValueTransformerForDataDescriptor:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 ;
@end

