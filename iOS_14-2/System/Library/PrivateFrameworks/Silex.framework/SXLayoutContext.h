/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutContext.h>
@class SXColumnLayout, SXUnitConverter;


@protocol SXLayoutContext <NSObject>
@property (nonatomic,readonly) SXColumnLayout * columnLayout; 
@property (nonatomic,readonly) SXUnitConverter * unitConverter; 
@required
-(SXColumnLayout *)columnLayout;
-(SXUnitConverter *)unitConverter;

@end


@class SXColumnLayout, SXUnitConverter, NSString;

@interface SXLayoutContext : NSObject <SXLayoutContext> {

	SXColumnLayout* _columnLayout;
	SXUnitConverter* _unitConverter;

}

@property (nonatomic,readonly) SXColumnLayout * columnLayout;                //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) SXUnitConverter * unitConverter;              //@synthesize unitConverter=_unitConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXColumnLayout *)columnLayout;
-(SXUnitConverter *)unitConverter;
-(id)initWithColumnLayout:(id)arg1 unitConverter:(id)arg2 ;
@end

