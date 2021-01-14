/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontAttributesConstructor.h>

@protocol SXFontAttributesConstructor <NSObject>
@required
-(id)fontNameForAttributes:(id)arg1 size:(long long)arg2;
-(id)fontAttributesForFontDescriptions:(id)arg1;

@end


@protocol SXFontIndex;
@class NSString;

@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor> {

	id<SXFontIndex> _fontIndex;

}

@property (nonatomic,readonly) id<SXFontIndex> fontIndex;              //@synthesize fontIndex=_fontIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fontNameForAttributes:(id)arg1 size:(long long)arg2 ;
-(long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2 ;
-(id)fontAttributesForFontDescriptions:(id)arg1 ;
-(id<SXFontIndex>)fontIndex;
-(id)initWithFontIndex:(id)arg1 ;
@end

