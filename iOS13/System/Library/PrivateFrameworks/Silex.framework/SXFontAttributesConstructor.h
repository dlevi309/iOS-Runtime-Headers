/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXFontAttributesConstructor.h>

@protocol SXFontAttributesConstructor <NSObject>
@required
-(id)fontAttributesForFontDescriptions:(id)arg1;
-(id)fontNameForAttributes:(id)arg1 size:(long long)arg2;

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
-(id)fontAttributesForFontDescriptions:(id)arg1 ;
-(id)fontNameForAttributes:(id)arg1 size:(long long)arg2 ;
-(id<SXFontIndex>)fontIndex;
-(id)initWithFontIndex:(id)arg1 ;
-(long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2 ;
@end

