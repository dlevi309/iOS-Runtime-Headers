/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXLayoutContext.h>
@class SXColumnLayout, SXUnitConverter;


@protocol SXLayoutContext <NSObject>
@property (nonatomic,readonly) SXColumnLayout * columnLayout; 
@property (nonatomic,readonly) SXUnitConverter * unitConverter; 
@required
-(SXUnitConverter *)unitConverter;
-(SXColumnLayout *)columnLayout;

@end


@class SXColumnLayout, SXUnitConverter, NSString;

@interface SXLayoutContext : NSObject <SXLayoutContext> {

	SXColumnLayout* _columnLayout;
	SXUnitConverter* _unitConverter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXColumnLayout * columnLayout;                //@synthesize columnLayout=_columnLayout - In the implementation block
@property (nonatomic,readonly) SXUnitConverter * unitConverter;              //@synthesize unitConverter=_unitConverter - In the implementation block
-(SXUnitConverter *)unitConverter;
-(SXColumnLayout *)columnLayout;
-(id)initWithColumnLayout:(id)arg1 unitConverter:(id)arg2 ;
@end

